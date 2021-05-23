/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSPredicate, NWNetworkAdviceUpdate;

@interface NWNetworkOfInterest : NSObject

{
    _Bool isThinnedOut;
    NSMutableArray *allInvitesHourly;
    NSMutableArray *bgInvitesHourly;
    int lastHour;
    _Bool _isTrafficEligible;
    _Bool _willGetDiscretionaryTrafficInvites;
    _Bool _discretionaryTrafficInvited;
    _Bool _isAny;
    _Bool _isBuiltin;
    long long _considerAlternate;
    NWNetworkAdviceUpdate *_considerAlternateUpdate;
    long long _linkQuality;
    long long _powerCostDL;
    long long _powerCostUL;
    NSDate *_predictionsGeneratedAt;
    NSArray *_predictions;
    long long _interface;
    NSPredicate *_customSignature;
    long long _version;
    long long _scopedToLOI;
    long long _flags;
}

@property (readonly) long long version;
@property (readonly) long long scopedToLOI;
@property (readonly) long long flags;
@property _Bool isTrafficEligible;
@property _Bool willGetDiscretionaryTrafficInvites;
@property _Bool discretionaryTrafficInvited;
@property long long considerAlternate;
@property (retain) NWNetworkAdviceUpdate *considerAlternateUpdate;
@property long long linkQuality;
@property long long powerCostDL;
@property long long powerCostUL;
@property (retain) NSDate *predictionsGeneratedAt;
@property (retain) NSArray *predictions;
@property (readonly) long long interface;
@property (readonly) _Bool isAny;
@property (readonly) _Bool isBuiltin;
@property (readonly) NSPredicate *customSignature;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)_descriptionFull:(_Bool)arg1;
- (_Bool)_isEqualToNOI:(id)arg1;
- (id)initWithSpec:(long long)arg1 isAny:(_Bool)arg2 isBuiltin:(_Bool)arg3 scopedToLOI:(long long)arg4 flags:(long long)arg5 hasCustomSignature:(id)arg6;
- (id)typePrettyPrint;
- (_Bool)atHomeScopedNOI;
- (_Bool)atWorkScopedNOI;
- (id)identityAttrsOnly;
- (void)addObserverForAllKeyPaths:(id)arg1;
- (void)removeObserverForAllKeyPaths:(id)arg1;
- (id)hasForegroundActivity;
- (void)anchorPowerCostToLinkQuality;
- (_Bool)_newDistroSlot;
- (id)instantQuality;
- (void)setInstantQuality:(id)arg1;
- (void)setHasForegroundActivity:(id)arg1;
- (id)predictionsError;
- (id)dayOfWeekGrouping;
- (id)trainingProgress;
- (id)invitesHourlyDistribution;

@end
