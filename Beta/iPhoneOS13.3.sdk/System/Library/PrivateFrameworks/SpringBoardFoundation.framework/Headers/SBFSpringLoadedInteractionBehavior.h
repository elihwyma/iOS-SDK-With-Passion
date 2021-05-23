/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SBFSpringLoadedInteractionBehaviorDelegate;

@interface SBFSpringLoadedInteractionBehavior : NSObject

{
    id <SBFSpringLoadedInteractionBehaviorDelegate> _delegate;
}

@property (weak, nonatomic) id <SBFSpringLoadedInteractionBehaviorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)shouldAllowInteraction:(id)arg1 withContext:(id)arg2;
- (void)interactionDidFinish:(id)arg1;

@end
