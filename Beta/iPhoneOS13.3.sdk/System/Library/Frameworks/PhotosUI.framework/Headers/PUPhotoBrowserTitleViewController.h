/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDateComponentsFormatter, NSString, PLDateRangeFormatter, UIColor, UITapGestureRecognizer, UIView;

@protocol PUPhotoBrowserTitleViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoBrowserTitleViewController : NSObject

{
    struct {
        _Bool respondsToTapped;
    } _delegateFlags;
    _Bool _tappable;
    _Bool _usingCompactTitleView;
    _Bool __isPerformingChanges;
    _Bool __isUpdating;
    _Bool __needsUpdateDayAndTimeDescriptions;
    _Bool __needsUpdatePlayClockDescription;
    _Bool __needsUpdateLabels;
    _Bool __needsUpdateGestureRecognizers;
    UIView *_view;
    id <PUPhotoBrowserTitleViewControllerDelegate> _delegate;
    NSString *_geoDescription;
    NSDate *_creationDate;
    PLDateRangeFormatter *__dayFormatter;
    PLDateRangeFormatter *__timeFormatter;
    NSDateComponentsFormatter *__playClockFormatter;
    NSString *__dayDescription;
    NSString *__timeDescription;
    NSString *__playClockDescription;
    UITapGestureRecognizer *__tapGestureRecognizer;
    CDStruct_1b6d18a9 _currentPlaybackTime;
    CDStruct_1b6d18a9 _playbackDuration;
}

@property (nonatomic, setter=_setPerformingChanges:) _Bool _isPerformingChanges;
@property (nonatomic, setter=_setUpdating:) _Bool _isUpdating;
@property (nonatomic, setter=_setNeedsUpdateDayAndTimeDescriptions:) _Bool _needsUpdateDayAndTimeDescriptions;
@property (nonatomic, setter=_setNeedsUpdatePlayClockDescription:) _Bool _needsUpdatePlayClockDescription;
@property (nonatomic, setter=_setNeedsUpdateLabels:) _Bool _needsUpdateLabels;
@property (nonatomic, setter=_setNeedsUpdateGestureRecognizers:) _Bool _needsUpdateGestureRecognizers;
@property (nonatomic, readonly) PLDateRangeFormatter *_dayFormatter;
@property (nonatomic, readonly) PLDateRangeFormatter *_timeFormatter;
@property (nonatomic, readonly) NSDateComponentsFormatter *_playClockFormatter;
@property (retain, nonatomic, setter=_setDayDescription:) NSString *_dayDescription;
@property (retain, nonatomic, setter=_setTimeDescription:) NSString *_timeDescription;
@property (retain, nonatomic, setter=_setPlayClockDescription:) NSString *_playClockDescription;
@property (retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer;
@property (nonatomic, readonly) UIView *view;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (weak, nonatomic) id <PUPhotoBrowserTitleViewControllerDelegate> delegate;
@property (nonatomic, getter=isTappable) _Bool tappable;
@property (nonatomic, getter=isUsingCompactTitleView) _Bool usingCompactTitleView;
@property (retain, nonatomic) NSString *geoDescription;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) CDStruct_1b6d18a9 currentPlaybackTime;
@property (nonatomic) CDStruct_1b6d18a9 playbackDuration;
@property (retain, nonatomic) UIColor *textColor;

- (id)init;
- (_Bool)_needsUpdate;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdate;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_updateIfNeeded;
- (void)_dateFormatterChanged:(id)arg1;
- (void)_assertInsideChangeBlock;
- (void)_assertInsideUpdate;
- (void)_invalidateGestureRecognizers;
- (void)_updateGestureRecognizersIfNeeded;
- (void)_invalidateDayAndTimeDescriptions;
- (void)_updateDayAndTimeDescriptionsIfNeeded;
- (void)_invalidatePlayClockDescription;
- (void)_updatePlayClockDescriptionIfNeeded;
- (void)_invalidateLabels;
- (void)_updateLabelsIfNeeded;

@end
