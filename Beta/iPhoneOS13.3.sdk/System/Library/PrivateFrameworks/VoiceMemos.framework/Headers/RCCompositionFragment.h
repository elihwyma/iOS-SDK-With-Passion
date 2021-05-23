/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface RCCompositionFragment : NSObject

{
    CDStruct_73a5d3ca _timeRangeInContentToUse;
    NSURL *_AVOutputURL;
    double _contentDuration;
    CDStruct_73a5d3ca _timeRangeInComposition;
}

@property (retain, nonatomic) NSURL *AVOutputURL;
@property (nonatomic) double contentDuration;
@property (nonatomic) CDStruct_73a5d3ca timeRangeInContentToUse;
@property (nonatomic) CDStruct_73a5d3ca timeRangeInComposition;
@property (nonatomic, readonly) NSURL *waveformURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithAVOutputURL:(id)arg1 contentDuration:(double)arg2 timeRangeInContentToUse:(CDStruct_73a5d3ca)arg3 timeRangeInComposition:(CDStruct_73a5d3ca)arg4;
- (id)initWithDictionaryPListRepresentation:(id)arg1;
- (id)dictionaryPListRepresentation;
- (void)deleteFromFilesystem;
- (void)moveAssetsToFragment:(id)arg1;
- (unsigned long long)fileSizeOfAssetsIncludingRelatedResources:(_Bool)arg1;
- (id)fragmentByIntersectingTimeRangeInCompositionWithTimeRange:(CDStruct_73a5d3ca)arg1;

@end
