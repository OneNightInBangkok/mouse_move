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

Чтобы симулировать движение мыши, нужно в функцию "mouse_event" Положить значения на x или y те, на которые я хочу, чтобы мышь двигалась.

Например у меня мышь по средине экрана. Если я хочу Передвинуть ее вправо, то Я должен положить значение в X больше 0.
