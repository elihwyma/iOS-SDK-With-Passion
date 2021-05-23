/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMEvent.h>

#import <HomeKit/Swift-Protocol.h>

@class HMMutableArray, HMPresenceEventActivation, NSString;

@interface HMPresenceEvent : HMEvent <Swift>

{
    NSString *_presenceType;
    HMPresenceEventActivation *_activation;
    unsigned long long _presenceEventType;
    unsigned long long _presenceUserType;
    HMMutableArray *_observedUsers;
}

@property (retain, nonatomic) NSString *presenceType;
@property (retain, nonatomic) HMPresenceEventActivation *activation;
@property (nonatomic, readonly) unsigned long long activationGranularity;
@property (nonatomic, readonly) HMMutableArray *observedUsers;
@property (nonatomic, readonly) unsigned long long presenceEventType;
@property (nonatomic, readonly) unsigned long long presenceUserType;

+ (_Bool)supportsSecureCoding;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (_Bool)isSupportedForHome:(id)arg1;
+ (id)users:(id)arg1 home:(id)arg2 presenceType:(id)arg3;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)users;
- (id)_serializeForAdd;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (void)_update:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDict:(id)arg1 presenceType:(id)arg2 users:(id)arg3 activation:(id)arg4;
- (id)initWithPresenceType:(id)arg1 users:(id)arg2;
- (id)initWithDict:(id)arg1 presenceType:(id)arg2 users:(id)arg3 activationGranularity:(unsigned long long)arg4;
- (id)initWithPresenceEventType:(unsigned long long)arg1 presenceUserType:(unsigned long long)arg2 users:(id)arg3;
- (void)_updatePresenceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateUsers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithPresenceType:(id)arg1;
- (id)initWithPresenceEventType:(unsigned long long)arg1 presenceUserType:(unsigned long long)arg2;
- (void)setPresenceEventType:(unsigned long long)arg1;
- (void)setPresenceUserType:(unsigned long long)arg1;
- (void)updatePresenceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateUsers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
