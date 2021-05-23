/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProvider.h>

@class NSString;

@interface REBulletinDistributorRelevanceProvider : RERelevanceProvider

{
    NSString *_bulletinSectionIdentifier;
}

@property (nonatomic, readonly) NSString *bulletinSectionIdentifier;

+ (id)relevanceSimulatorID;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)_hash;
- (id)dictionaryEncoding;
- (id)initWithBulletinSectionIdentifier:(id)arg1;

@end
