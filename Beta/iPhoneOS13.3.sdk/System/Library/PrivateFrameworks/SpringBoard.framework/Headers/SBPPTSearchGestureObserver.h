/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBPPTSearchGestureObserver : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;
- (void)searchGesture:(id)arg1 startedShowing:(_Bool)arg2;
- (void)searchGesture:(id)arg1 completedShowing:(_Bool)arg2;

@end
