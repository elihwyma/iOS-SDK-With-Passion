/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UISceneSnapshotBSActionsHandler : NSObject

@property (nonatomic, readonly) _Bool wantsOwnAssertion;
@property (nonatomic, readonly) _Bool wantsAsyncSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;

@end
