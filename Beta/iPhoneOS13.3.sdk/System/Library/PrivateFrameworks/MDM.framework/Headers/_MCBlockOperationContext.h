/*
 Image: /System/Library/PrivateFrameworks/MDM.framework/MDM
 */

#import <Foundation/NSObject.h>

@class MCBlockOperation;

@interface _MCBlockOperationContext : NSObject

{
    MCBlockOperation *_operation;
}

@property (retain, nonatomic) MCBlockOperation *operation;

- (void)endBlockOperation;

@end
