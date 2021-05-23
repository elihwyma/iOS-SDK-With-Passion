/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProvider.h>

@interface REMotionRelevanceProvider : RERelevanceProvider

{
    unsigned long long _motionTypes;
}

@property (nonatomic, readonly) unsigned long long motionTypes;

+ (id)relevanceSimulatorID;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)_hash;
- (id)dictionaryEncoding;
- (id)initWithMotionTypes:(unsigned long long)arg1;

@end
