/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSString;

@interface PRSL2FeatureVector : NSObject

{
    struct PRSL2FeatureScoreSmallCache _cache;
    void *_featureData;
    unsigned short _featureDataSize;
    unsigned char _flags;
    unsigned char _values;
    float _originalL2Score;
    float _experimentalScore;
    float _withinBundleScore;
    NSString *_bundleID;
    NSString *_device_type;
    NSDictionary *_searchThroughCEPData;
    MISSING_TYPE *_indexScore;
}

@property (nonatomic) float originalL2Score;
@property (nonatomic) float experimentalScore;
@property (nonatomic) float withinBundleScore;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *device_type;
@property (retain, nonatomic) NSDictionary *searchThroughCEPData;
@property (nonatomic) MISSING_TYPE *indexScore;
@property (nonatomic) _Bool displayNameFuzzySpecialInsertion;
@property (nonatomic) _Bool isSiriAction;
@property (nonatomic) _Bool isAppInDock;
@property (nonatomic, readonly) _Bool vipSenderMatchesQuery;
@property (nonatomic, readonly) _Bool senderIsVip;
@property (nonatomic, readonly) _Bool receiverIsVip;

+ (void)initialize;
+ (struct FeatureInfo *)featureForName:(id)arg1;
+ (id)contextWithFeatureOrder:(id)arg1 withInflation:(unsigned long long)arg2 withInflatedIndexToSize:(id)arg3;
+ (struct __CFSet *)getL2FeatureSet;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)cleanup;
- (float *)getAllScores:(float [1239])arg1;
- (void)setScores:(float *)arg1 forFeatures:(unsigned short *)arg2 count:(unsigned long long)arg3;
- (float)scoreForFeature:(unsigned short)arg1;
- (_Bool)serializeToJSON:(void *)arg1 valuesOnly:(_Bool)arg2 ignoreDefaultValues:(_Bool)arg3;
- (id)_dictionaryRepresentationWithoutDefaultValues:(_Bool)arg1;
- (void)restoreFromJazzkonHacks:(float *)arg1;
- (id)initWithCache:(struct PRSL2FeatureScoreSmallCache)arg1 featureData:(void *)arg2 featureDataSize:(unsigned short)arg3 flags:(unsigned char)arg4 values:(unsigned char)arg5;
- (id)dictionaryRepresentationWithoutDefaultValues;

@end
