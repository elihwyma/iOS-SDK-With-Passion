/*
 Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

@class CALayer, MISSING_TYPE, NSObject, NSString, UIImageView;

typedef void (^CDUnknownBlockType)(void);

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct UIColor {
    Class _field1;
};

struct UIOffset {
    double horizontal;
    double vertical;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct animation_completion_handler_container {
    CDUnknownBlockType _completion;
};

struct animator<float __attribute__((ext_vector_type(3))), 0> {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    unsigned char _field5;
};

struct animator<float __attribute__((ext_vector_type(4))), 0> {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    unsigned char _field5;
};

struct animator<float, 0> {
    float _target;
    float _intermediate;
    float _actual;
    float _k;
    float _elapsed_n;
    float _target_n;
    float _visual_target_n;
    unsigned char _interpolation;
};

struct animator<nullptr_t, 0> {
    char *_target;
    char *_intermediate;
    char *_actual;
    float _k;
    float _elapsed_n;
    float _target_n;
    float _visual_target_n;
    unsigned char _interpolation;
};

struct animator<simd::quatf, 0> {
    struct quatf _field1;
    struct quatf _field2;
    struct quatf _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    unsigned char _field8;
};

struct array<(anonymous namespace)::blur_container, 2> {
    struct blur_container __elems_[2];
};

struct array<id<MTLRenderPipelineState>, 3> {
    id __elems_[3];
};

struct array<id<MTLTexture>, 2> {
    id __elems_[2];
};

struct atomic<unsigned char> {
    _Atomic unsigned char __a_;
};

struct blur_container {
    UIImageView *view;
    struct periodic_animation_state pulse;
};

struct buffer_group;

struct control_point;

struct double4x4 {
    MISSING_TYPE *columns[4];
};

struct float4x4 {
    MISSING_TYPE *_field1[4];
};

struct global_state {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
};

struct global_state_animator {
    struct animator<float, 0> accumulator_growth;
    struct animator<float, 0> accumulator_persistence;
    struct animator<float, 0> accumulator_luminance_alpha_factor;
    struct animator<float, 0> blur_scale;
    struct animator<nullptr_t, 0> hidden_animator;
};

struct instance_uniform {
    struct float4x4 _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
};

struct map<CALayer *__unsafe_unretained, CALayer *, std::__1::less<CALayer *__unsafe_unretained>, std::__1::allocator<std::__1::pair<CALayer *const __unsafe_unretained, CALayer *>>> {
    struct __tree<std::__1::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::__1::__map_value_compare<CALayer *__unsafe_unretained, std::__1::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::__1::less<CALayer *__unsafe_unretained>, true>, std::__1::allocator<std::__1::__value_type<CALayer *__unsafe_unretained, CALayer *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<CALayer *__unsafe_unretained, CALayer *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<CALayer *__unsafe_unretained, std::__1::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::__1::less<CALayer *__unsafe_unretained>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct periodic_animation_state {
    _Bool enabled;
    NSString *_key;
    CALayer *_layer;
    NSObject *_removal_timer;
};

struct quatf;

struct renderer_shared_state {
    id device;
    id depth_stencil_state;
    id tesselation_factor_pipeline;
    id tube_pipeline;
    struct array<id<MTLRenderPipelineState>, 3> begin_cap_pipelines;
    struct array<id<MTLRenderPipelineState>, 3> end_cap_pipelines;
    id horizontal_blur_pipeline;
    id vertical_blur_pipeline;
    id accumulator_pipeline;
};

struct spline {
    struct vector<std::__1::vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>>, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>>>> _field1;
    unsigned long long _field2;
    vector_bb3a7121 _field3;
    unsigned long long _field4;
    _Bool _field5;
    struct vector<LAUI_uniform_cubic_b_spline_renderer::animator<float __attribute__((ext_vector_type(3))), 0>, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::animator<float __attribute__((ext_vector_type(3))), 0>>> _field6;
    struct animator<nullptr_t, 0> _field7;
    struct animation_completion_handler_container _field8;
    _Bool _field9;
};

struct spline_instance {
    unsigned long long _field1;
    vector_2142f81e _field2;
    unsigned long long _field3;
    _Bool _field4;
    struct animator<float __attribute__((ext_vector_type(3))), 0> _field5;
    struct animator<simd::quatf, 0> _field6;
    struct animator<float __attribute__((ext_vector_type(3))), 0> _field7;
    struct animator<simd::quatf, 0> _field8;
    struct animator<float __attribute__((ext_vector_type(3))), 0> _field9;
    struct animator<float __attribute__((ext_vector_type(4))), 0> _field10;
    struct animator<float, 0> _field11;
    struct animator<float, 0> _field12;
    struct animator<float, 0> _field13;
    struct animator<nullptr_t, 0> _field14;
    CDUnknownFunctionPointerType _field15;
    _Bool _field16;
    float _field17;
    float _field18;
    struct animator<float, 0> _field19;
    float _field20;
    struct animation_completion_handler_container _field21;
    _Bool _field22;
};

struct spline_instance_state {
    struct quatf _field1;
    struct quatf _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    _Bool _field8;
    float _field9;
    CDUnknownFunctionPointerType _field10;
};

struct spline_state;

struct vector<(anonymous namespace)::buffer_group, std::__1::allocator<(anonymous namespace)::buffer_group>> {
    struct buffer_group *__begin_;
    struct buffer_group *__end_;
    struct __compressed_pair<(anonymous namespace)::buffer_group *, std::__1::allocator<(anonymous namespace)::buffer_group>> {
        struct buffer_group *__value_;
    } __end_cap_;
};

struct vector<CAShapeLayer *, std::__1::allocator<CAShapeLayer *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<CAShapeLayer *__strong *, std::__1::allocator<CAShapeLayer *>> {
        id *__value_;
    } __end_cap_;
};

struct vector<LAUI_CA_utilities::animation_completion_handler_container, std::__1::allocator<LAUI_CA_utilities::animation_completion_handler_container>> {
    struct animation_completion_handler_container *__begin_;
    struct animation_completion_handler_container *__end_;
    struct __compressed_pair<LAUI_CA_utilities::animation_completion_handler_container *, std::__1::allocator<LAUI_CA_utilities::animation_completion_handler_container>> {
        struct animation_completion_handler_container *__value_;
    } __end_cap_;
};

struct vector<LAUI_uniform_cubic_b_spline_renderer::animator<float __attribute__((ext_vector_type(3))), 0>, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::animator<float __attribute__((ext_vector_type(3))), 0>>> {
    struct animator<float __attribute__((ext_vector_type(3))), 0> *_field1;
    struct animator<float __attribute__((ext_vector_type(3))), 0> *_field2;
    struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::animator<float __attribute__((ext_vector_type(3))), 0>*, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::animator<float __attribute__((ext_vector_type(3))), 0>>> {
        struct animator<float __attribute__((ext_vector_type(3))), 0> *_field1;
    } _field3;
};

struct vector<LAUI_uniform_cubic_b_spline_renderer::global_state, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::global_state>> {
    struct global_state *__begin_;
    struct global_state *__end_;
    struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::global_state *, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::global_state>> {
        struct global_state *__value_;
    } __end_cap_;
};

struct vector<LAUI_uniform_cubic_b_spline_renderer::spline, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline>> {
    struct spline *__begin_;
    struct spline *__end_;
    struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::spline *, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline>> {
        struct spline *__value_;
    } __end_cap_;
};

struct vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance>>;

struct vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state>> {
    struct spline_instance_state *_field1;
    struct spline_instance_state *_field2;
    struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state *, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state>> {
        struct spline_instance_state *_field1;
    } _field3;
};

struct vector<LAUI_uniform_cubic_b_spline_renderer::spline_state, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_state>> {
    struct spline_state *_field1;
    struct spline_state *_field2;
    struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::spline_state *, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_state>> {
        struct spline_state *_field1;
    } _field3;
};

struct vector<LAUI_uniform_cubic_b_spline_renderer_private::control_point, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point>> {
    struct control_point *__begin_;
    struct control_point *__end_;
    struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer_private::control_point *, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point>> {
        struct control_point *__value_;
    } __end_cap_;
};

struct vector<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform>> {
    struct instance_uniform *__begin_;
    struct instance_uniform *__end_;
    struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform *, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform>> {
        struct instance_uniform *__value_;
    } __end_cap_;
};

struct vector<UIView *, std::__1::allocator<UIView *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<UIView *__strong *, std::__1::allocator<UIView *>> {
        id *__value_;
    } __end_cap_;
};

struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>>;

struct vector<std::__1::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance>>, std::__1::allocator<std::__1::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance>>>> {
    struct vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance>> *__begin_;
    struct vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance>> *__end_;
    struct __compressed_pair<std::__1::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance>>*, std::__1::allocator<std::__1::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance>>>> {
        struct vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance>> *__value_;
    } __end_cap_;
};

struct vector<std::__1::vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>>, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>>>> {
    struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> *_field1;
    struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> *_field2;
    struct __compressed_pair<std::__1::vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>>*, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>>>> {
        struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> *_field1;
    } _field3;
};

struct vector<unsigned short, std::__1::allocator<unsigned short>> {
    unsigned short *__begin_;
    unsigned short *__end_;
    struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short>> {
        unsigned short *__value_;
    } __end_cap_;
};

// Template types
typedef struct vector<LAUI_uniform_cubic_b_spline_renderer::global_state, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::global_state>> {
    struct global_state *__begin_;
    struct global_state *__end_;
    struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::global_state *, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::global_state>> {
        struct global_state *__value_;
    } __end_cap_;
} vector_c9a5f96b;

typedef struct vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state>> {
    struct spline_instance_state *_field1;
    struct spline_instance_state *_field2;
    struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state *, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state>> {
        struct spline_instance_state *_field1;
    } _field3;
} vector_2142f81e;

typedef struct vector<LAUI_uniform_cubic_b_spline_renderer::spline_state, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_state>> {
    struct spline_state *_field1;
    struct spline_state *_field2;
    struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::spline_state *, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_state>> {
        struct spline_state *_field1;
    } _field3;
} vector_bb3a7121;
