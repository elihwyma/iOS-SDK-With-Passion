/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class BSServiceConnectionEndpointInjector, NSMutableArray, NSString, RBSTarget;

__attribute__((visibility("hidden")))
@interface _UIVisibilityPropagationView : UIView

{
    struct os_unfair_lock_s _visibilityLock;
    RBSTarget *_visibilityLock_target;
    _Bool _visibilityLock_enabled;
    NSString *_visibilityLock_sourceEnvironment;
    _Bool _visibilityLock_updateEnqueued;
    struct os_unfair_lock_s _visibilityProcessingLock;
    RBSTarget *_visibilityProcessingLock_target;
    NSString *_visibilityProcessingLock_sourceEnvironment;
    BSServiceConnectionEndpointInjector *_visibilityProcessingLock_endpointInjector;
    NSMutableArray *_windowChangeNotifications;
}

@property (nonatomic, getter=isVisibilityPropagationEnabled) _Bool visibilityPropagationEnabled;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)setVisibilityTarget:(id)arg1;
- (void)_updateVisibility;
- (void)_visibilityLock_enqueueUpdateIfNecessary;
- (void)_visibilityLock_enqueueUpdateIfNecessary_body;
- (void)_visibilityLock_updateVisibility;
- (void)_visibilityLock_setSource:(id)arg1;

@end
