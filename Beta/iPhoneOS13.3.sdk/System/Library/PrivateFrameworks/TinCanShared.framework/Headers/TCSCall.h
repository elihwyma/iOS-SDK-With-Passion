/*
 Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, TCSCallCenter;

@interface TCSCall : NSObject

{
    TCSCallCenter *_callCenter;
    _Bool _isNilCall;
    _Bool _isConnected;
    _Bool _isOutgoing;
    _Bool _isRemoteUplinkMuted;
    int _status;
    int _disconnectedReason;
    NSString *_contactIdentifier;
    NSString *_handleValue;
    NSString *_uniqueProxyIdentifier;
    NSDate *_dateAnsweredOrDialed;
    NSDate *_dateConnected;
}

@property (nonatomic, readonly) _Bool isConnected;
@property (nonatomic, readonly) _Bool isOutgoing;
@property (nonatomic, readonly) _Bool isIncoming;
@property (nonatomic, readonly) _Bool isRemoteUplinkMuted;
@property (nonatomic, readonly) _Bool isActive;
@property (copy, nonatomic, readonly) NSString *contactIdentifier;
@property (copy, nonatomic, readonly) NSString *handleValue;
@property (nonatomic, readonly) int status;
@property (copy, nonatomic, readonly) NSString *uniqueProxyIdentifier;
@property (nonatomic, readonly) int disconnectedReason;
@property (copy, nonatomic, readonly) NSDate *dateAnsweredOrDialed;
@property (copy, nonatomic, readonly) NSDate *dateConnected;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCall:(id)arg1;
- (void)setCallCenter:(id)arg1;
- (_Bool)isEqualToCall:(id)arg1;
- (void)setUplinkMuted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end
