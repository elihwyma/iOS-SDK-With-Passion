/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class REFeature;

@interface REFeatureValuePair : NSObject

{
    REFeature *_feature;
    unsigned long long _value;
}

@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) unsigned long long value;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeature:(id)arg1 value:(unsigned long long)arg2;

@end
