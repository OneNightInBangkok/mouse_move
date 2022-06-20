# mouse_move

# mouse_event(MOUSEEVENTF_MOVE, x, y, 0, 0);

VOID mouse_event(
    DWORD dwFlags,
    DWORD dx,
    DWORD dy,
    DWORD dwData,
    ULONG_PTR dwExtraInfo
);


Если мышь двигалась, то установка флажка MOUSEEVENTF_MOVE указывает, что параметры  dx и dy содержат информацию об этом движении.
