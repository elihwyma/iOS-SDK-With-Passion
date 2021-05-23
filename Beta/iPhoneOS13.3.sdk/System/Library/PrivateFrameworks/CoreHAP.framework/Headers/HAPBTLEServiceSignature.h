/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSArray, NSNumber, NSUUID;

@interface HAPBTLEServiceSignature : HMFObject

{
    _Bool _authenticated;
    NSUUID *_serviceType;
    NSNumber *_serviceInstanceID;
    unsigned long long _serviceProperties;
    NSArray *_linkedServices;
}

@property (copy, nonatomic, readonly) NSUUID *serviceType;
@property (copy, nonatomic, readonly) NSNumber *serviceInstanceID;
@property (nonatomic, readonly) unsigned long long serviceProperties;
@property (nonatomic, readonly) NSArray *linkedServices;
@property (nonatomic, readonly, getter=isAuthenticated) _Bool authenticated;

- (id)description;
- (id)initWithServiceType:(id)arg1 serviceInstanceID:(id)arg2 serviceProperties:(unsigned long long)arg3 linkedServices:(id)arg4 authenticated:(_Bool)arg5;

@end
