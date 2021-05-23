/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProvider.h>

@class REFeature;

@interface RECustomRelevanceProvider : RERelevanceProvider

{
    REFeature *_feature;
    unsigned long long _value;
}

@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) unsigned long long value;

+ (id)relevanceSimulatorID;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)_hash;
- (id)dictionaryEncoding;
- (id)initWithFeature:(id)arg1 value:(unsigned long long)arg2;

@end
