/*
 Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

#import <Foundation/NSObject.h>

@class LAUIRenderLoop, MTLRenderPassDescriptor;

@protocol MTLBuffer, MTLCommandQueue, MTLTexture;

__attribute__((visibility("hidden")))
@interface LAUICubicBSplineRenderer : NSObject

{
    LAUIRenderLoop *_render_loop;
    unsigned long long _frame_index;
    struct renderer_shared_state _shared_render_state;
    id <MTLCommandQueue> _command_queue;
    MTLRenderPassDescriptor *_render_pass_descriptor;
    MTLRenderPassDescriptor *_clear_pass_descriptor;
    struct vector<(anonymous namespace)::buffer_group, std::__1::allocator<(anonymous namespace)::buffer_group>> _ring_buffer;
    struct atomic<unsigned char> _ring_start;
    struct atomic<unsigned char> _ring_end;
    id <MTLBuffer> _tesselation_factors;
    unsigned long long _drawable_width;
    unsigned long long _drawable_height;
    id <MTLTexture> _multisample_texture;
    id <MTLTexture> _depth_stencil_texture;
    _Bool _textures_dirty;
    struct array<id<MTLTexture>, 2> _textures;
    unsigned long long _texture_index;
    struct vector<LAUI_uniform_cubic_b_spline_renderer_private::control_point, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point>> _control_points;
    struct vector<unsigned short, std::__1::allocator<unsigned short>> _control_point_indices;
    struct vector<LAUI_uniform_cubic_b_spline_renderer_private::control_point, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point>> _cap_control_points;
    struct vector<unsigned short, std::__1::allocator<unsigned short>> _cap_control_point_indices;
    struct vector<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform>> _spline_instance_uniforms;
    _Bool _caps_dirty;
    double _last_render_time;
    struct global_state_animator _global_state_animator;
    vector_c9a5f96b _animation_targets;
    unsigned long long _current_animation_target_index;
    _Bool _reversed;
    _Bool _needs_update;
    struct animation_completion_handler_container _completion_container;
    struct vector<LAUI_uniform_cubic_b_spline_renderer::spline, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline>> _spline_state;
    struct vector<std::__1::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance>>, std::__1::allocator<std::__1::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance>>>> _instance_state;
    unsigned long long _instance_count;
    _Bool _wireframe_enabled;
    struct double4x4 _model_transform;
    struct double4x4 _view_transform;
    struct double4x4 _projection_transform;
}

@property (nonatomic, getter=isWireframeEnabled, setter=setWireframeEnabled:) _Bool wireframe_enabled;
@property (nonatomic, getter=modelTransform, setter=setModelTransform:) struct double4x4 model_transform;
@property (nonatomic, getter=viewTransform, setter=setViewTransform:) struct double4x4 view_transform;
@property (nonatomic, getter=projectionTransform, setter=setProjectionTransform:) struct double4x4 projection_transform;

+ (struct renderer_shared_state)sharedStateForDevice:(id)arg1;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)releaseBuffers;
- (void)_updateState:(double)arg1;
- (_Bool)renderAtTime:(double)arg1;
- (unsigned long long)addInstance:(const struct spline_instance *)arg1;
- (void)_updateCapForSpline:(unsigned long long)arg1 instance:(unsigned long long)arg2;
- (void)_updateTarget:(const struct global_state *)arg1;
- (void)updateRenderPassDescriptorWithDrawable:(id)arg1;
- (void)setSplineInstanceUniform:(struct instance_uniform)arg1 forSpline:(unsigned long long)arg2 instance:(unsigned long long)arg3 forceCapRegeneration:(_Bool)arg4;
- (id)initWithRenderLoop:(id)arg1 sharedState:(const struct renderer_shared_state *)arg2;
- (unsigned long long)addSpline:(const struct spline *)arg1;
- (void)setAnimationTargets:(const vector_c9a5f96b *)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setAnimationTargets:(const vector_bb3a7121 *)arg1 forSpline:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setAnimationTargets:(const vector_2142f81e *)arg1 forSpline:(unsigned long long)arg2 instance:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (struct spline_instance_state)animationTargetForSpline:(unsigned long long)arg1 instance:(unsigned long long)arg2;
- (void)updateLastRenderTime;

@end
