/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBAnimationWrapperHostRequester : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedRequester;

- (long long)sceneViewPresentationPriority:(id)arg1;
- (id)sceneViewPresentationIdentifier:(id)arg1;

@end
