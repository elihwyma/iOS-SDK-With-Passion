/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGTextFeature : NSObject

{
    float _weight;
    NSString *_string;
    NSString *_originalString;
    unsigned long long _type;
    unsigned long long _origin;
}

@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSString *originalString;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) float weight;
@property (nonatomic, readonly) unsigned long long origin;

+ (id)stringForFeatureOrigin:(unsigned long long)arg1;
+ (id)stringForFeatureType:(unsigned long long)arg1;
+ (id)textFeaturesFromNode:(id)arg1 type:(unsigned long long)arg2 weight:(float)arg3 options:(unsigned long long)arg4;
+ (id)_stringToIndexFromTokens:(id)arg1;
+ (id)textFeaturesFromString:(id)arg1 type:(unsigned long long)arg2 weight:(float)arg3 options:(unsigned long long)arg4;
+ (id)_tokensFromString:(id)arg1 lemmatize:(_Bool)arg2;
+ (id)textFeaturesFromString:(id)arg1 synonyms:(id)arg2 type:(unsigned long long)arg3 weight:(float)arg4 options:(unsigned long long)arg5;
+ (id)_localizedNameForLocalizableNode:(id)arg1;
+ (id)graphNamesForNode:(id)arg1;
+ (id)mergedTextFeatureFromTextFeatures:(id)arg1;
+ (id)vipTextFeatureTypes;
+ (unsigned long long)_mostImportantTextFeatureTypeAmongTypes:(id)arg1;

- (id)description;
- (id)initWithString:(id)arg1 originalString:(id)arg2 type:(unsigned long long)arg3 weight:(float)arg4 origin:(unsigned long long)arg5;
- (void)markAsStrippedOut;

@end
