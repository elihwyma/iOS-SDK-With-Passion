/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class RETaggedFeatureValueArray;

@interface RERelevanceValue : NSObject

{
    unsigned long long _hash;
    _Bool _isHistoric;
    RETaggedFeatureValueArray *_values;
}

@property (nonatomic, readonly) RETaggedFeatureValueArray *values;
@property (nonatomic, readonly) _Bool isHistoric;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValues:(id)arg1;
- (id)initWithValues:(id)arg1 isHistoric:(_Bool)arg2;

@end
