/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

#import <SoundAnalysis/Swift-Protocol.h>

@class NSString;

@interface SNAudioOffsetResult : NSObject <Swift>

{
    double confidence;
    double _offset;
    CDStruct_e83c9415 timeRange;
}

@property (nonatomic) double offset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDStruct_e83c9415 timeRange;
@property (nonatomic, readonly) double confidence;

- (void)setConfidence:(double)arg1;
- (void)setTimeRange:(CDStruct_e83c9415)arg1;

@end
