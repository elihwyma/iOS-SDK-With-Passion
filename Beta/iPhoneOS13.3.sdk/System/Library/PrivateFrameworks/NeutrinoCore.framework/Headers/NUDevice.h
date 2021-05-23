/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSString, NURenderer;

@protocol MTLDevice, NURenderer, OS_dispatch_queue;

@interface NUDevice : NSObject

{
    NURenderer *_renderer;
    NURenderer *_lowPriorityRenderer;
    NSObject<OS_dispatch_queue> *_queue;
    long long _defaultSampleMode;
    NSString *_name;
    NSString *_model;
    id <MTLDevice> _metalDevice;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) _Bool hasMetalSupport;
@property (nonatomic, readonly) _Bool hasOpenGLSupport;
@property (nonatomic, readonly) long long openGLVirtualScreen;
@property (nonatomic, readonly) id <NURenderer> renderer;
@property (nonatomic, readonly) id <NURenderer> lowPriorityRenderer;
@property (nonatomic, readonly) id <MTLDevice> metalDevice;
@property (nonatomic, readonly) _Bool shouldRenderUsingMetal;
@property (nonatomic, readonly) _Bool shouldRenderUsingOpenGL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long family;
@property (nonatomic, readonly) long long defaultSampleMode;

- (id)init;
- (void)clearCaches;
- (long long)_preferredSampleMode;
- (id)renderer:(out id *)arg1;
- (id)lowPriorityRenderer:(out id *)arg1;
- (long long)_defaultSampleMode;
- (id)initWithName:(id)arg1 model:(id)arg2 metalDevice:(id)arg3;
- (long long)_openGLVirtualScreen;
- (long long)_computeDefaultSampleMode;
- (id)_renderer:(out id *)arg1;
- (_Bool)shouldLogRendererUsed;
- (id)_newRenderer:(out id *)arg1;
- (id)_lowPriorityRenderer:(out id *)arg1;
- (id)_newLowPriorityRenderer:(out id *)arg1;

@end
