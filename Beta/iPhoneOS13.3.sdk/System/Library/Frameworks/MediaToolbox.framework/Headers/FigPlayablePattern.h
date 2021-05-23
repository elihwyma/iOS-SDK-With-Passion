/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <NSObject.h>

@class AVHapticSequence;

@protocol CHHapticAdvancedPatternPlayerExtended;

__attribute__((visibility("hidden")))
@interface FigPlayablePattern : NSObject

{
    _Bool _usingCoreHaptics;
    id <CHHapticAdvancedPatternPlayerExtended> _player;
    AVHapticSequence *_sequence;
    CDStruct_e83c9415 _timeRange;
    CDStruct_e83c9415 _outputTimeRange;
}

@property (nonatomic) _Bool usingCoreHaptics;
@property (retain, nonatomic) id <CHHapticAdvancedPatternPlayerExtended> player;
@property (retain, nonatomic) AVHapticSequence *sequence;
@property (nonatomic) CDStruct_e83c9415 timeRange;
@property (nonatomic) CDStruct_e83c9415 outputTimeRange;

- (void)dealloc;
- (id)initWithSBuf:(struct opaqueCMSampleBuffer *)arg1 chEngine:(id)arg2;
- (id)initWithSBuf:(struct opaqueCMSampleBuffer *)arg1 avhpEngine:(id)arg2;

@end
