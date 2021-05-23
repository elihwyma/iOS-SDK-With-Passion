/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@interface SBFScheduler : NSObject

+ (id)mainScheduler;
+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;

@end
