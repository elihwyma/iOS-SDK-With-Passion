/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, TLAlertConfiguration;

@interface NCNotificationSound : NSObject

{
    long long _soundType;
    unsigned int _systemSoundID;
    unsigned long long _soundBehavior;
    NSString *_ringtoneName;
    NSDictionary *_vibrationPattern;
    _Bool _repeats;
    double _maxDuration;
    NSDictionary *_controllerAttributes;
    NSString *_songPath;
    TLAlertConfiguration *_alertConfiguration;
}

@property (nonatomic, readonly) long long soundType;
@property (nonatomic, readonly) unsigned int systemSoundID;
@property (nonatomic, readonly) unsigned long long soundBehavior;
@property (copy, nonatomic, readonly) NSString *ringtoneName;
@property (copy, nonatomic, readonly) NSDictionary *vibrationPattern;
@property (nonatomic, readonly, getter=isRepeating) _Bool repeats;
@property (nonatomic, readonly) double maxDuration;
@property (copy, nonatomic, readonly) NSDictionary *controllerAttributes;
@property (copy, nonatomic, readonly) NSString *songPath;
@property (copy, nonatomic, readonly) TLAlertConfiguration *alertConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithNotificationSound:(id)arg1;

@end
