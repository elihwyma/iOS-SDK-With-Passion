/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@protocol DADataclassLockWatcher;

@interface DAWaiterWrapper : NSObject

{
    id <DADataclassLockWatcher> _waiter;
    long long _dataclasses;
    CDUnknownBlockType _completionHandler;
    int _waiterNum;
}

@property (retain, nonatomic) id <DADataclassLockWatcher> waiter;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) long long dataclasses;
@property (nonatomic, readonly) int waiterNum;

- (id)init;
- (id)description;

@end
