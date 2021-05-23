/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface FlexSegment : NSObject

{
    _Bool _sliceable;
    NSString *_name;
    long long _priority;
    long long _bars;
    long long _beatsPerBar;
    long long _samplesPerBar;
    NSArray *_customBarMarkers;
    long long _sampleRate;
    long long _sampleCount;
    NSDictionary *_transitions;
    NSDictionary *_markers;
    unsigned long long _type;
    unsigned long long _errors;
    NSDictionary *_metadataValues;
    NSString *_namePrefix;
    NSString *_nameStem;
    NSString *_nameIndex;
    NSString *_nameSuffix;
}

@property (copy, nonatomic, readonly) NSString *namePrefix;
@property (copy, nonatomic, readonly) NSString *nameStem;
@property (copy, nonatomic, readonly) NSString *nameIndex;
@property (copy, nonatomic, readonly) NSString *nameSuffix;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long priority;
@property (nonatomic) long long bars;
@property (nonatomic) long long beatsPerBar;
@property (nonatomic) long long samplesPerBar;
@property (retain, nonatomic) NSArray *customBarMarkers;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long sampleCount;
@property (nonatomic) _Bool sliceable;
@property (retain, nonatomic) NSDictionary *transitions;
@property (retain, nonatomic) NSDictionary *markers;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long errors;
@property (nonatomic, readonly) NSDictionary *metadataValues;

+ (id)readInfoFromAudioFileAtPath:(id)arg1;
+ (long long)samplesForTimeInMsec:(long long)arg1 atSampleRate:(long long)arg2;
+ (id)shortLabelForSegmentType:(unsigned long long)arg1;
+ (id)longLabelForSegmentType:(unsigned long long)arg1;
+ (_Bool)canTransitionFromSegment:(id)arg1 toSegment:(id)arg2 fromBarIndex:(long long)arg3 checkIfPrevented:(_Bool)arg4;
+ (id)segmentsWithType:(unsigned long long)arg1 inSegments:(id)arg2;
+ (id)segmentsWithType:(unsigned long long)arg1 nameIndex:(id)arg2 nameSuffix:(id)arg3 inSegments:(id)arg4;
+ (id)segmentWithName:(id)arg1 inSegments:(id)arg2;
+ (long long)crossfadeLengthInSamplesForFromSeg:(id)arg1 toSeg:(id)arg2 fadeOutTimeInMsec:(long long)arg3 fadeInTimeInMsec:(long long)arg4 validFadeOutSamples:(long long *)arg5 validFadeInSamples:(long long *)arg6;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFileAtPath:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)metadataValueForKey:(id)arg1;
- (void)addMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)encodeAsDictionary;
- (void)_decodeTypeInfoFromSegmentName;
- (_Bool)relinkAllTransitions;
- (long long)barStartPositionForBarIndex:(long long)arg1;
- (long long)barEndPositionForBarIndex:(long long)arg1;
- (_Bool)linkedPerBarTransitionsToSegmentNamed:(id)arg1;
- (id)transitionToSegmentNamed:(id)arg1 fromBarIndex:(long long)arg2;
- (void)setLinkedPerBarTransitions:(_Bool)arg1 toSegmentNamed:(id)arg2;
- (id)initAsCrossFade:(id)arg1 sampleRate:(long long)arg2 sampleCount:(long long)arg3 beatsPerBar:(long long)arg4;
- (long long)barDurationForBarIndex:(long long)arg1;
- (void)addOrReplaceTransition:(id)arg1 toSegmentNamed:(id)arg2 fromBarIndex:(long long)arg3;
- (void)removeTransitionToSegmentNamed:(id)arg1 fromBarIndex:(long long)arg2;
- (_Bool)isPriorityValid;

@end
