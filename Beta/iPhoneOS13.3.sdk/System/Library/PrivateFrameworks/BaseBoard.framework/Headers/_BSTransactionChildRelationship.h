/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class BSTransaction;

@interface _BSTransactionChildRelationship : NSObject

{
    BSTransaction *_childTransaction;
    unsigned long long _schedulingPolicy;
}

@property (nonatomic, readonly) BSTransaction *childTransaction;
@property (nonatomic, readonly) unsigned long long schedulingPolicy;

- (id)initWithChildTransaction:(id)arg1 schedulingPolicy:(unsigned long long)arg2;

@end
