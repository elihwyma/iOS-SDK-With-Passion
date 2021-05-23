/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class CHStrokeClassificationResult, CHStrokeClutterFilter, CHStrokeGroupingResult, NSArray, NSDictionary, NSString;

@protocol CHStrokeProviderVersion;

@interface CHRecognitionSessionResult : NSObject

{
    long long __transcriptionCapability;
    id <CHStrokeProviderVersion> _strokeProviderVersion;
    NSArray *_orderedStrokeIdentifiers;
    NSArray *_locales;
    NSArray *_preferredLocales;
    CHStrokeClutterFilter *_clutterFilter;
    long long _recognitionEnvironment;
    CHStrokeClassificationResult *_strokeClassificationResult;
    CHStrokeGroupingResult *_strokeGroupingResult;
    NSDictionary *__recognitionResultsByGroupID;
    CDStruct_76929b14 _generationDuration;
}

@property (copy, nonatomic, readonly) NSDictionary *_recognitionResultsByGroupID;
@property (nonatomic, readonly) long long _transcriptionCapability;
@property (retain, nonatomic, readonly) id <CHStrokeProviderVersion> strokeProviderVersion;
@property (retain, nonatomic, readonly) NSArray *orderedStrokeIdentifiers;
@property (copy, nonatomic, readonly) NSArray *locales;
@property (copy, nonatomic, readonly) NSArray *preferredLocales;
@property (retain, nonatomic, readonly) CHStrokeClutterFilter *clutterFilter;
@property (nonatomic, readonly) long long recognitionEnvironment;
@property (retain, nonatomic, readonly) CHStrokeClassificationResult *strokeClassificationResult;
@property (retain, nonatomic, readonly) CHStrokeGroupingResult *strokeGroupingResult;
@property (nonatomic, readonly) CDStruct_76929b14 generationDuration;
@property (nonatomic, readonly) NSString *highConfidenceDebugDescription;
@property (nonatomic, readonly) NSString *allResultsDebugDescription;
@property (nonatomic, readonly) NSArray *allResultsDebugDescriptionByGroup;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)recognitionResultForStrokeGroupIdentifier:(long long)arg1;
- (id)_resultsDebugDescriptionIntoGroupsArray:(id)arg1 groupHeaderBlock:(CDUnknownBlockType)arg2;
- (id)initWithStrokeProviderVersion:(id)arg1 orderedStrokeIdentifiers:(id)arg2 locales:(id)arg3 preferredLocales:(id)arg4 clutterFilter:(id)arg5 strokeClassificationResult:(id)arg6 strokeGroupingResult:(id)arg7 recognitionResults:(id)arg8 inlineContinuousModeResults:(id)arg9 generationDuration:(CDStruct_76929b14)arg10 recognitionEnvironment:(long long)arg11;
- (id)allResultsDebugDescriptionWithGroupHeaderBlock:(CDUnknownBlockType)arg1;

@end
