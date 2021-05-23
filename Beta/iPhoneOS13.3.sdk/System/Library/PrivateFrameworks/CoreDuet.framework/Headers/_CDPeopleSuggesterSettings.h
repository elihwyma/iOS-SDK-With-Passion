/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface _CDPeopleSuggesterSettings : NSObject

{
    _Bool _useFuture;
    _Bool _aggregateByIdentifier;
    _Bool _requireOutgoingInteraction;
    _Bool _useTitleToContrainKeywords;
    _Bool _inferActiveInteractions;
    unsigned long long _maxNumberOfPeopleSuggested;
    NSSet *_constrainMechanisms;
    NSSet *_constrainBundleIds;
    NSSet *_constrainAccounts;
    NSSet *_constrainDomainIdentifiers;
    NSSet *_constrainIdentifiers;
    NSSet *_constrainPersonIds;
    NSSet *_constrainPersonIdType;
    unsigned long long _constrainMaxRecipientCount;
    NSSet *_ignoreContactIdentifiers;
}

@property unsigned long long maxNumberOfPeopleSuggested;
@property (retain) NSSet *constrainMechanisms;
@property (retain) NSSet *constrainBundleIds;
@property (retain) NSSet *constrainAccounts;
@property (retain) NSSet *constrainDomainIdentifiers;
@property (retain) NSSet *constrainIdentifiers;
@property (retain) NSSet *constrainPersonIds;
@property (retain) NSSet *constrainPersonIdType;
@property unsigned long long constrainMaxRecipientCount;
@property _Bool useFuture;
@property _Bool aggregateByIdentifier;
@property _Bool requireOutgoingInteraction;
@property _Bool useTitleToContrainKeywords;
@property _Bool inferActiveInteractions;
@property (retain) NSSet *ignoreContactIdentifiers;

+ (id)defaultSettings;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
