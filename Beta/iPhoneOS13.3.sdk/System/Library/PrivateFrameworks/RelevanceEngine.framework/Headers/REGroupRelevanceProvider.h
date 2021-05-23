/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProvider.h>

@class NSString;

@interface REGroupRelevanceProvider : RERelevanceProvider

{
    NSString *_groupIdentifier;
}

@property (nonatomic, readonly) NSString *groupIdentifier;

+ (id)relevanceSimulatorID;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)_hash;
- (id)initWithGroupIdentifier:(id)arg1;
- (id)dictionaryEncoding;

@end
