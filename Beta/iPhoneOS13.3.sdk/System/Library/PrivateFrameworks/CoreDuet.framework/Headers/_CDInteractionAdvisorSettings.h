/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, NSSet, NSString;

@interface _CDInteractionAdvisorSettings : NSObject

{
    _Bool _useFuture;
    _Bool _aggregateByIdentifier;
    _Bool _requireOutgoingInteraction;
    NSDate *_interactionDate;
    NSString *_interactionTitle;
    NSSet *_seedIdentifiers;
    NSString *_interactionLocationUUID;
    NSString *_contactPrefix;
    NSSet *_constrainDirections;
    NSSet *_constrainMechanisms;
    NSSet *_constrainBundleIds;
    NSSet *_constrainAccounts;
    NSSet *_constrainDomainIdentifiers;
    NSSet *_constrainLocationUUIDs;
    NSSet *_constrainSenders;
    NSSet *_constrainRecipients;
    NSSet *_constrainKeywords;
    NSSet *_constrainIdentifiers;
    NSSet *_constrainPersonIds;
    NSSet *_constrainPersonIdType;
    long long _constrainMaxRecipientCount;
    unsigned long long _resultLimit;
    NSSet *_ignoreContactIdentifiers;
    NSSet *_ignoreInteractionUUIDs;
    NSString *_consumerIdentifier;
    NSString *_callerBundleId;
}

@property (retain) NSString *callerBundleId;
@property (retain) NSDate *interactionDate;
@property (retain) NSString *interactionTitle;
@property (retain) NSSet *seedIdentifiers;
@property (retain) NSString *interactionLocationUUID;
@property (retain) NSString *contactPrefix;
@property (retain) NSSet *constrainDirections;
@property (retain) NSSet *constrainMechanisms;
@property (retain) NSSet *constrainBundleIds;
@property (retain) NSSet *constrainAccounts;
@property (retain) NSSet *constrainDomainIdentifiers;
@property (retain) NSSet *constrainLocationUUIDs;
@property (retain) NSSet *constrainSenders;
@property (retain) NSSet *constrainRecipients;
@property (retain) NSSet *constrainKeywords;
@property (retain) NSSet *constrainIdentifiers;
@property (retain) NSSet *constrainPersonIds;
@property (retain) NSSet *constrainPersonIdType;
@property long long constrainMaxRecipientCount;
@property unsigned long long resultLimit;
@property _Bool useFuture;
@property _Bool aggregateByIdentifier;
@property _Bool requireOutgoingInteraction;
@property (retain) NSSet *ignoreContactIdentifiers;
@property (retain) NSSet *ignoreInteractionUUIDs;
@property (retain, nonatomic) NSString *consumerIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)interactionAdvisorSettingsDefault;
+ (id)extractContactIdentifiers:(id)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)interactionPredicate;
- (id)contactPredicate;

@end
