/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _UIKitFencingProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)systemAnimationFenceExemptQueue;
- (void)synchronizeDrawingWithFence:(id)arg1;

@end
