/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _SBFImmediateScheduler : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)performBlock:(CDUnknownBlockType)arg1;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;

@end
