/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_source, SCNJittererDelegate;

__attribute__((visibility("hidden")))
@interface SCNJitterer : NSObject

{
    _Bool _enabled;
    unsigned long long _state;
    unsigned long long _iteration;
    _Bool _restartSourceIsSuspended;
    id <SCNJittererDelegate> _delegate;
    NSObject<OS_dispatch_source> *_restartSource;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;

+ (void)initialize;

- (void)dealloc;
- (void)update;
- (id)initWithDelegate:(id)arg1;
- (id)loadDelegate;
- (void)restart;
- (void)jitter;
- (void)stopIfNeeded;
- (void)delegateWillDie;
- (_Bool)isAborting;

@end
