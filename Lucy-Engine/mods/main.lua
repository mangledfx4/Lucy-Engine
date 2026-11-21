camera = {
    x = 0,
    y = 0,
    z = -5,
    pitch = 0,
    yaw = 0
}

function update()
    local mx, my = get_mouse_delta()

    camera.yaw = camera.yaw + mx * 0.3
    camera.pitch = camera.pitch + my * 0.3
end

function draw()
    set_camera(
        camera.x,
        camera.y,
        camera.z,
        camera.pitch,
        camera.yaw
    )

    draw_cube(0, 0, 0)
    draw_plane(0, -1, 0)
end
