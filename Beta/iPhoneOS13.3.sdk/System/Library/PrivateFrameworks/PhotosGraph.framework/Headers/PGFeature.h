/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGFeature : NSObject

{
    id _typeSpecificIdentifier;
    unsigned long long _type;
    NSString *_name;
}

@property (readonly) unsigned long long type;
@property (readonly) NSString *name;
@property (readonly) _Bool isNoneFeature;

+ (id)stringForFeatureType:(unsigned long long)arg1;
+ (id)featureWithType:(unsigned long long)arg1 node:(id)arg2;
+ (id)featureWithMeaningfulEvent:(id)arg1;
+ (id)featureWithType:(unsigned long long)arg1 name:(id)arg2;
+ (id)noneFeatureWithType:(unsigned long long)arg1;
+ (id)nameForNode:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)encodedFeature;
- (id)initWithEncodedFeature:(id)arg1 graph:(id)arg2;
- (id)nodeInGraph:(id)arg1;

@end
