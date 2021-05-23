/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIAutonomousSingleAppModeConfiguration;

@interface UIAutonomousSingleAppModeSession : NSObject

{
    _Bool _active;
    UIAutonomousSingleAppModeConfiguration *_effectiveConfiguration;
}

@property (copy, nonatomic) UIAutonomousSingleAppModeConfiguration *effectiveConfiguration;
@property (nonatomic, getter=isActive) _Bool active;

+ (id)__gaxTrampoline_currentlyActiveSession;
+ (void)__gaxTrampoline_requestSessionWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)currentlyActiveSession;
+ (void)requestSessionWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (void)_guidedAccessStateDidChange:(id)arg1;
- (void)__gaxTrampoline_endSessionWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithEffectiveConfiguration:(id)arg1;
- (void)endWithCompletion:(CDUnknownBlockType)arg1;

@end
