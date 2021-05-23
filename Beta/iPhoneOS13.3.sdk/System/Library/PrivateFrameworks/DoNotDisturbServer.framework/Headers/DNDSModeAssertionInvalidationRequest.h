/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class DNDModeAssertionInvalidationDetails, DNDModeAssertionSource, DNDSModeAssertionInvalidationPredicate, NSDate, NSString, NSUUID;

@interface DNDSModeAssertionInvalidationRequest : NSObject

{
    NSUUID *_UUID;
    DNDSModeAssertionInvalidationPredicate *_predicate;
    NSDate *_requestDate;
    DNDModeAssertionInvalidationDetails *_details;
    DNDModeAssertionSource *_source;
    unsigned long long _reason;
    unsigned long long _reasonOverride;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *UUID;
@property (copy, nonatomic, readonly) DNDSModeAssertionInvalidationPredicate *predicate;
@property (copy, nonatomic, readonly) NSDate *requestDate;
@property (copy, nonatomic, readonly) DNDModeAssertionInvalidationDetails *details;
@property (copy, nonatomic, readonly) DNDModeAssertionSource *source;
@property (nonatomic, readonly) unsigned long long reason;
@property (nonatomic, readonly) unsigned long long reasonOverride;

+ (id)requestWithPredicate:(id)arg1 requestDate:(id)arg2 source:(id)arg3 reason:(unsigned long long)arg4;
+ (id)requestWithPredicate:(id)arg1 requestDate:(id)arg2 details:(id)arg3 source:(id)arg4 reason:(unsigned long long)arg5 reasonOverride:(unsigned long long)arg6;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)resolveWithExpectedRemoteDeviceIdentifier:(id)arg1 localDeviceIdentifier:(id)arg2 remoteDeviceIdentifier:(id)arg3;
- (id)initWithUUID:(id)arg1 predicate:(id)arg2 requestDate:(id)arg3 details:(id)arg4 source:(id)arg5 reason:(unsigned long long)arg6 reasonOverride:(unsigned long long)arg7;

@end
