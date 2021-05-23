/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSString, NSTimer, UILabel;

__attribute__((visibility("hidden")))
@interface PUPhotoEditPerfHUD : UIView

{
    UILabel *_detailLabel;
    UILabel *_clockLabel;
    UILabel *_mainTimerLabel;
    UILabel *_resourceTimerLabel;
    UILabel *_resourceCheckingLabel;
    UILabel *_resourceDownloadingLabel;
    UILabel *_filterTimerLabel;
    UILabel *_autoCalcTimerLabel;
    UILabel *_saveTimerLabel;
    NSTimer *_timer;
    CDStruct_3139860e _mainTimerState;
    CDStruct_3139860e _resourceTimerState;
    CDStruct_3139860e _resourceCheckingState;
    CDStruct_3139860e _resourceDownloadingState;
    CDStruct_3139860e _filterTimerState;
    CDStruct_3139860e _autoCalcTimerState;
    CDStruct_3139860e _saveTimerState;
}

@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *clockLabel;
@property (retain, nonatomic) UILabel *mainTimerLabel;
@property (retain, nonatomic) UILabel *resourceTimerLabel;
@property (retain, nonatomic) UILabel *resourceCheckingLabel;
@property (retain, nonatomic) UILabel *resourceDownloadingLabel;
@property (retain, nonatomic) UILabel *filterTimerLabel;
@property (retain, nonatomic) UILabel *autoCalcTimerLabel;
@property (retain, nonatomic) UILabel *saveTimerLabel;
@property (nonatomic) CDStruct_3139860e mainTimerState;
@property (nonatomic) CDStruct_3139860e resourceTimerState;
@property (nonatomic) CDStruct_3139860e resourceCheckingState;
@property (nonatomic) CDStruct_3139860e resourceDownloadingState;
@property (nonatomic) CDStruct_3139860e filterTimerState;
@property (nonatomic) CDStruct_3139860e autoCalcTimerState;
@property (nonatomic) CDStruct_3139860e saveTimerState;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) NSString *detailText;

+ (void)_updateLabel:(id)arg1 withState:(CDStruct_3139860e)arg2 prefix:(id)arg3;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateTimer;
- (void)startMainTimer;
- (void)startMainTimerWithTime:(double)arg1;
- (void)stopMainTimer;
- (void)startResourceLoadingTimer;
- (void)stopResourceLoadingTimer;
- (void)startResourceCheckingTimer;
- (void)stopResourceCheckingTimer;
- (void)startResourceDownloadingTimer;
- (void)stopResourceDownloadingTimer;
- (void)startFilterTimer;
- (void)stopFilterTimer;
- (void)startAutoCalcTimer;
- (void)stopAutoCalcTimer;
- (void)startSaveTimer;
- (void)stopSaveTimer;
- (void)stopAndClearAllTimers;
- (_Bool)_needsTimer;
- (void)_timerTick;
- (void)_updateMainTimerLabel;
- (void)_updateResourceTimerLabel;
- (void)_updateResourceCheckingLabel;
- (void)_updateResourceDownloadingLabel;
- (void)_updateFilterTimerLabel;
- (void)_updateAutoCalcTimerLabel;
- (void)_updateSaveTimerLabel;

@end
