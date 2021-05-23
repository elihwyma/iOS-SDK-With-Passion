/*
 Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

#import <iCloudQuotaDaemon/ICQDaemonPersisted.h>

@class NSString, _ICQAlertSpecification, _ICQFollowupSpecification;

@interface ICQDaemonOffer : ICQDaemonPersisted

{
    NSString *_notificationID;
    NSString *_offerId;
    _ICQAlertSpecification *_internalAlertSpecification;
    _ICQFollowupSpecification *_internalFollowupSpecification;
}

@property (nonatomic, readonly) _ICQAlertSpecification *alertSpecification;
@property (nonatomic, readonly) _ICQFollowupSpecification *followupSpecification;
@property (retain, nonatomic) _ICQAlertSpecification *internalAlertSpecification;
@property (retain, nonatomic) _ICQFollowupSpecification *internalFollowupSpecification;
@property (nonatomic, readonly) long long level;
@property (nonatomic, readonly, getter=isBuddyOffer) _Bool buddyOffer;
@property (retain, nonatomic) NSString *notificationID;
@property (copy, nonatomic) NSString *offerId;

+ (id)persistenceKey;
+ (id)substitutionForPlaceholderKey:(id)arg1 outIsBelowMin:(_Bool *)arg2;
+ (id)substitutionsForPlaceholderKeys:(id)arg1 checkIfBelowMin:(_Bool)arg2 outIsMissingSubstitution:(_Bool *)arg3;
+ (id)stringWithPlaceholderFormat:(id)arg1 alternateString:(id)arg2;
+ (_Bool)placeholderExistsInString:(id)arg1;
+ (id)defaultPlaceholderKeys;
+ (id)placeholderKeysInString:(id)arg1 fromKeys:(id)arg2;
+ (id)stringWithPlaceholderFormat:(id)arg1 substitutions:(id)arg2;
+ (id)substitutionsForPlaceholderKeys:(id)arg1;
+ (id)stringWithPlaceholderFormat:(id)arg1;

- (id)initWithDictionary:(id)arg1;
- (id)_initWithAccount:(id)arg1 serverDictionary:(id)arg2;
- (void)_addSampleAlert;
- (id)_initWithAccount:(id)arg1 error:(id)arg2;
- (void)setServerDictionary:(id)arg1;
- (void)_initSubclassFromServerDictionary;
- (id)_mutablePersistenceDictionary;
- (id)alertSpecificationForAlertKey:(id)arg1;

@end
