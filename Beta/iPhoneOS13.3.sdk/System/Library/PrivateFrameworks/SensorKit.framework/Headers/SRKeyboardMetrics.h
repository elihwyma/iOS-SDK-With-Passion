/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSDateInterval, NSDictionary, NSMeasurement, NSMutableDictionary, NSString;

@interface SRKeyboardMetrics : NSObject

{
    NSDateInterval *_interval;
    NSDictionary *_keyboardMetaInformation;
    NSMutableDictionary *_mutableScalarMetrics;
    NSMutableDictionary *_mutablePositionalMetrics;
    NSMutableDictionary *_mutableProbabilityMetrics;
}

@property (retain) NSDateInterval *interval;
@property (copy) NSDictionary *keyboardMetaInformation;
@property (retain) NSMutableDictionary *mutableScalarMetrics;
@property (retain) NSMutableDictionary *mutablePositionalMetrics;
@property (retain) NSMutableDictionary *mutableProbabilityMetrics;
@property (readonly) double duration;
@property (copy, readonly) NSString *keyboardIdentifier;
@property (copy, readonly) NSString *version;
@property (readonly) NSMeasurement *width;
@property (readonly) NSMeasurement *height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)binarySampleRepresentation;
- (id)sr_dictionaryRepresentation;
- (id)scalarMetrics;
- (id)probabilityMetrics;
- (id)positionalMetrics;
- (id)initWithInterval:(id)arg1 metaInformation:(id)arg2;
- (long long)totalWords;
- (long long)totalAlteredWords;
- (long long)totalTaps;
- (long long)totalDrags;
- (long long)totalDeletes;
- (long long)totalEmojis;
- (long long)totalPaths;
- (double)totalPathTime;
- (id)totalPathLength;
- (long long)totalAutoCorrections;
- (long long)totalSpaceCorrections;
- (long long)totalRetroCorrections;
- (long long)totalTranspositionCorrections;
- (long long)totalInsertKeyCorrections;
- (long long)totalSkipTouchCorrections;
- (long long)totalNearKeyCorrections;
- (long long)totalSubstitutionCorrections;
- (long long)totalHitTestCorrections;
- (double)totalTypingDuration;
- (id)upErrorDistance;
- (id)downErrorDistance;
- (id)spaceUpErrorDistance;
- (id)spaceDownErrorDistance;
- (id)deleteUpErrorDistance;
- (id)deleteDownErrorDistance;
- (id)shortWordCharKeyUpErrorDistance;
- (id)shortWordCharKeyDownErrorDistance;
- (id)touchDownUp;
- (id)spaceTouchDownUp;
- (id)deleteTouchDownUp;
- (id)shortWordCharKeyTouchDownUp;
- (id)touchDownDown;
- (id)charKeyToPrediction;
- (id)shortWordCharKeyToCharKey;
- (id)charKeyToAnyTapKey;
- (id)anyTapToCharKey;
- (id)spaceToCharKey;
- (id)charKeyToSpaceKey;
- (id)spaceToDeleteKey;
- (id)deleteToSpaceKey;
- (id)spaceToSpaceKey;
- (id)spaceToShiftKey;
- (id)spaceToPlaneChangeKey;
- (id)spaceToPredictionKey;
- (id)deleteToCharKey;
- (id)charKeyToDelete;
- (id)deleteToDelete;
- (id)deleteToShiftKey;
- (id)deleteToPlaneChangeKey;
- (id)anyTapToPlaneChangeKey;
- (id)planeChangeToAnyTap;
- (id)charKeyToPlaneChangeKey;
- (id)planeChangeKeyToCharKey;
- (id)pathErrorDistanceRatio;
- (id)deleteToPath;
- (id)pathToDelete;
- (id)spaceToPath;
- (id)pathToSpace;
- (id)pathToPath;
- (id)longWordUpErrorDistance;
- (id)longWordDownErrorDistance;
- (id)longWordTouchDownUp;
- (id)longWordTouchDownDown;
- (id)deleteToDeletes;

@end
