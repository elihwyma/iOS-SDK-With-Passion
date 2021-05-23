/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@interface CUNetLinkEndpoint : NSObject

{
    CDUnion_fab80606 _ipAddr;
    int _state;
    CDUnknownBlockType _stateChangedHandler;
    unsigned long long _expireTime;
    unsigned long long _expiredTicks;
    _Bool _present;
    unsigned int _seqNum;
    unsigned int _stateChanges;
    _Bool _client;
}

@property (nonatomic) CDUnion_fab80606 ipAddr;
@property (nonatomic, readonly, getter=isClient) _Bool client;
@property (nonatomic, readonly) int state;
@property (copy, nonatomic) CDUnknownBlockType stateChangedHandler;

- (id)description;
- (id)descriptionWithLevel:(int)arg1;

@end
