/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class MiroAutoEditLogger, MiroBlueprint, MiroMemory, Project;

@protocol MiroAutoEditDelegate;

__attribute__((visibility("hidden")))
@interface MiroAutoEdit_TrimController : NSObject

{
    _Bool _useNonSpecialDurations;
    _Bool _allowMoreThanMaxVideo;
    int _duration;
    int _lastClipInPoint;
    int _lastClipOutPoint;
    id <MiroAutoEditDelegate> _delegate;
}

@property (weak, nonatomic) id <MiroAutoEditDelegate> delegate;
@property (nonatomic, readonly) Project *project;
@property (nonatomic, readonly) MiroMemory *memory;
@property (nonatomic, readonly) MiroBlueprint *blueprint;
@property (nonatomic) int duration;
@property (nonatomic) int lastClipInPoint;
@property (nonatomic) int lastClipOutPoint;
@property (nonatomic, readonly) MiroAutoEditLogger *logger;
@property (nonatomic) _Bool useNonSpecialDurations;
@property (nonatomic) _Bool allowMoreThanMaxVideo;

+ (id)rangeModelsBySplittingRangeModels:(id)arg1 outsideRange:(id)arg2;

- (id)initWithDelegate:(id)arg1;
- (void)setupSongDuration;
- (_Bool)clipIsTitleCard:(id)arg1;
- (void)setDuration:(int)arg1 andStartTimeForClip:(id)arg2;
- (int)durationOfUserTrimForClip:(id)arg1;
- (void)_fitToDuration;
- (void)_saveFreezeBits;
- (void)_clipClip:(id)arg1;
- (id)_rangesForClipIncorporatingUserTrim:(id)arg1;
- (int)minimumBlueprintDurationForClip:(id)arg1;
- (int)maximumBlueprintDurationForClip:(id)arg1;
- (int)shrinkAndStretchClips:(id)arg1;
- (void)calcLastClipInPointAndOutPoint;
- (void)layoutProject;

@end
