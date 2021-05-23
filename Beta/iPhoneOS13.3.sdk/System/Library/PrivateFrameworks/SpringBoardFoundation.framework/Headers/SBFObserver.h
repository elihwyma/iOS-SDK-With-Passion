/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@interface SBFObserver : NSObject

+ (id)observerWithResultBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (id)observerWithResultBlock:(CDUnknownBlockType)arg1;
+ (void)sendArray:(id)arg1 error:(id)arg2 toObserver:(id)arg3;
+ (void)sendObserver:(id)arg1 resultsOfBlock:(CDUnknownBlockType)arg2;

@end
