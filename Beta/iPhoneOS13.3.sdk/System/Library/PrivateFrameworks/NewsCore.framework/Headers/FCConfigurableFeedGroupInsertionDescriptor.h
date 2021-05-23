/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSSet, NSString;

@interface FCConfigurableFeedGroupInsertionDescriptor : NSObject <Swift>

{
    NSString *_sourceIdentifier;
    NSSet *_precedingSourceIdentifiers;
    unsigned long long _firstGroupMinPrecedingTopicGroups;
    unsigned long long _minPrecedingTopicGroups;
}

@property (copy, nonatomic, readonly) NSString *sourceIdentifier;
@property (copy, nonatomic, readonly) NSSet *precedingSourceIdentifiers;
@property (nonatomic, readonly) unsigned long long firstGroupMinPrecedingTopicGroups;
@property (nonatomic, readonly) unsigned long long minPrecedingTopicGroups;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)wantsToInsertGroupInContext:(id)arg1;
- (id)initWithSourceIdentifier:(id)arg1 precedingSourceIdentifiers:(id)arg2 firstGroupMinPrecedingTopicGroups:(unsigned long long)arg3 minPrecedingTopicGroups:(unsigned long long)arg4;

@end
