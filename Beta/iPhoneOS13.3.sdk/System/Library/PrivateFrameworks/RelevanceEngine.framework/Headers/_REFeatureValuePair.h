/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, REFeature;

@interface _REFeatureValuePair : NSObject

{
    REFeature *_feature;
    unsigned long long _value;
    unsigned long long _index;
    NSArray *_rootFeatures;
}

@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) unsigned long long value;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) NSArray *rootFeatures;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1 value:(unsigned long long)arg2 index:(unsigned long long)arg3 rootFeatures:(id)arg4;

@end
