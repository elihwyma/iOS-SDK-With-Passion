/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NFUnfairLock, NSError, NSMutableArray;

@interface NFPromiseSeal : NSObject

{
    id _value;
    NSError *_error;
    unsigned long long _state;
    NSMutableArray *_handlers;
    NFUnfairLock *_lock;
}

@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *handlers;
@property (nonatomic, readonly) NFUnfairLock *lock;

- (id)init;
- (void)dealloc;
- (id)initWithError:(id)arg1;
- (void)resolve:(id)arg1;
- (id)initWithValue:(id)arg1;
- (void)alwaysOn:(id)arg1 always:(CDUnknownBlockType)arg2;
- (void)reject:(id)arg1;
- (void)resolveOn:(id)arg1 reject:(CDUnknownBlockType)arg2 resolve:(CDUnknownBlockType)arg3;
- (void)seal:(id)arg1 error:(id)arg2 resolution:(unsigned long long)arg3;
- (void)registerHandler:(CDUnknownBlockType)arg1;

@end
