#pragma once

/** DX11/Win32 backend options used before Backend::Initialize(). */
namespace Backend {

// Force D3D11's software rasterizer instead of trying a hardware device first.
void SetForceWarpDevice(bool force_warp);

// Reports the driver selected by the most recent successful initialization.
bool IsUsingWarpDevice();

} // namespace Backend
