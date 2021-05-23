/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class BSTransaction;

@interface _BSTransactionParentRelationship : NSObject

{
    BSTransaction *_parentTransaction;
    unsigned long long _schedulingPolicy;
}

@property (nonatomic, readonly) BSTransaction *parentTransaction;
@property (nonatomic, readonly) unsigned long long schedulingPolicy;

- (id)initWithParentTransaction:(id)arg1 schedulingPolicy:(unsigned long long)arg2;

@end
