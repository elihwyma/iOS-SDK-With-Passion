/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class NSDate;

@protocol ISVitalitySettings;

__attribute__((visibility("hidden")))
@interface ISVitalityFilter : NSObject

{
    _Bool _isVisible;
    _Bool _hasTargetVisibilityOffset;
    _Bool _isScrolling;
    _Bool _isDecelerating;
    _Bool _scrubbing;
    _Bool __isPerformingInputChanges;
    _Bool __isPerformingOutputChanges;
    _Bool __outputDidChange;
    id <ISVitalitySettings> _settings;
    double _visibilityOffset;
    double _targetVisibilityOffset;
    NSDate *_estimatedScrollEndDate;
    double _scrubOffset;
    double _playRate;
    CDUnknownBlockType _outputChangeHandler;
}

@property (nonatomic, setter=_setPerformingInputChanges:) _Bool _isPerformingInputChanges;
@property (nonatomic, setter=_setPerformingOutputChanges:) _Bool _isPerformingOutputChanges;
@property (nonatomic, setter=_setOutputDidChange:) _Bool _outputDidChange;
@property (nonatomic, getter=isScrubbing) _Bool scrubbing;
@property (nonatomic) double scrubOffset;
@property (nonatomic) double playRate;
@property (nonatomic, readonly) id <ISVitalitySettings> settings;
@property (nonatomic, setter=setVisible:) _Bool isVisible;
@property (nonatomic) double visibilityOffset;
@property (nonatomic) _Bool hasTargetVisibilityOffset;
@property (nonatomic) double targetVisibilityOffset;
@property (retain, nonatomic) NSDate *estimatedScrollEndDate;
@property (nonatomic, setter=setScrolling:) _Bool isScrolling;
@property (nonatomic, setter=setDecelerating:) _Bool isDecelerating;
@property (copy, nonatomic) CDUnknownBlockType outputChangeHandler;

- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)_invalidateOutput;
- (void)performInputChanges:(CDUnknownBlockType)arg1;
- (void)performOutputChanges:(CDUnknownBlockType)arg1;
- (void)inputDidChange;

@end
