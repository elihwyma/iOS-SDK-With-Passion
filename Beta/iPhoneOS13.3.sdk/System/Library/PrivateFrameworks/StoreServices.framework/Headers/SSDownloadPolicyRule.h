/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSSet, NSString;

@interface SSDownloadPolicyRule : NSObject

{
    NSSet *_applicationStates;
    float _batteryLevel;
    long long _cellularDataStates;
    long long _downloadSizeLimit;
    NSSet *_networkTypes;
    long long _powerStates;
    long long _registrationStates;
    long long _timeLimitStates;
    NSSet *_userDefaultStates;
}

@property (nonatomic) long long downloadSizeLimit;
@property (copy, nonatomic) NSSet *applicationStates;
@property (copy, nonatomic) NSSet *networkTypes;
@property (copy, nonatomic) NSSet *userDefaultStates;
@property (nonatomic, readonly, getter=isCellularAllowed) _Bool cellularAllowed;
@property (nonatomic, readonly, getter=isWiFiAllowed) _Bool wiFiAllowed;
@property (nonatomic) float batteryLevel;
@property (nonatomic) long long cellularDataStates;
@property (nonatomic) long long powerStates;
@property (nonatomic) long long registrationStates;
@property (nonatomic) long long timeLimitStates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addUserDefaultState:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)addApplicationState:(id)arg1;
- (void)addNetworkType:(long long)arg1;
- (void)unionPolicyRule:(id)arg1;

@end
