/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class INInteraction, INRelevantShortcut, NSArray, NSDate, NSDictionary, NSString, REIdentifier;

@protocol REDonatedActionIdentifierProviding;

@interface REDonatedAction : NSObject

{
    _Bool _isIntentBacked;
    _Bool _localDonation;
    unsigned long long _type;
    INInteraction *_interaction;
    NSDate *_creationDate;
    NSDate *_localSaveDate;
    REIdentifier *_donationIdentifier;
    id <REDonatedActionIdentifierProviding> _actionTypeIdentifier;
    id <REDonatedActionIdentifierProviding> _simplifiedActionTypeIdentifier;
    struct NSString *_eventLevelIdentifier;
    struct NSString *_appLevelIdentifier;
    unsigned long long _filteredShortcutType;
    unsigned long long _relevanceProvidersHash;
    NSArray *_relevanceProviders;
    NSString *_intentTypeName;
    NSString *_activityType;
    NSDictionary *_metrics;
    NSString *_userActivityRequiredString;
    NSString *_userActivityTitleString;
    INRelevantShortcut *_relevantShortcut;
}

@property (retain, nonatomic) NSString *userActivityRequiredString;
@property (retain, nonatomic) NSString *userActivityTitleString;
@property (retain, nonatomic) INRelevantShortcut *relevantShortcut;
@property (retain, nonatomic) INInteraction *interaction;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *localSaveDate;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) REIdentifier *donationIdentifier;
@property (nonatomic, readonly) id <REDonatedActionIdentifierProviding> actionTypeIdentifier;
@property (nonatomic, readonly) id <REDonatedActionIdentifierProviding> simplifiedActionTypeIdentifier;
@property (nonatomic, readonly, getter=isLocalDonation) _Bool localDonation;
@property (nonatomic, readonly) NSString *eventLevelIdentifier;
@property (nonatomic, readonly) NSString *appLevelIdentifier;
@property (nonatomic, readonly) unsigned long long filteredShortcutType;
@property (nonatomic, readonly) unsigned long long relevanceProvidersHash;
@property (nonatomic, readonly) NSArray *relevanceProviders;
@property (nonatomic, readonly) NSString *intentTypeName;
@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSString *remoteBundleIdentifier;
@property (nonatomic, readonly) NSString *localBundleIdentifier;
@property (nonatomic, readonly) unsigned long long trainingActionIdentifier;
@property (retain, nonatomic) NSDictionary *metrics;

+ (_Bool)supportsSecureCoding;
+ (id)bundleIdForExtensionId:(id)arg1;
+ (_Bool)supportedActivityType:(id)arg1 forBundleID:(id)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1 filtered:(_Bool)arg2;
- (void)_loadShortcutIdentifiersFromIntent:(id)arg1;
- (void)_loadShortcutIdentifiersFromUserActivity:(id)arg1;
- (unsigned long long)_hashRelevanceProviders:(id)arg1;
- (id)_shortcutFilter;
- (id)_initInteractionWithEvent:(id)arg1 filtered:(_Bool)arg2;
- (id)_initUserActivityWithEvent:(id)arg1 filtered:(_Bool)arg2;
- (id)_initRelevantShortcutWithEvent:(id)arg1 filtered:(_Bool)arg2;
- (void)loadUserActivity:(CDUnknownBlockType)arg1;
- (void)loadIntent:(CDUnknownBlockType)arg1;
- (void)loadRelevantShortcut:(CDUnknownBlockType)arg1;

@end
