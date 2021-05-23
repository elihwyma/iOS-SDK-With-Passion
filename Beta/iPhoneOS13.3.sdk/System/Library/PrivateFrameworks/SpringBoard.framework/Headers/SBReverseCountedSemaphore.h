/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group;

@interface SBReverseCountedSemaphore : NSObject

{
    NSObject<OS_dispatch_group> *_group;
}

- (id)init;
- (void)wait;
- (void)decrement;
- (void)increment;

@end
