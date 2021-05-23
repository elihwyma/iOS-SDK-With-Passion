/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface PUPhotoEditAggregateSession : NSObject

{
    _Bool _toggledOriginal;
    _Bool _pluginStarted;
    _Bool _pluginSaved;
    _Bool _shouldUseVideoKeys;
    _Bool __hasCropSuggestion;
    _Bool __hasPerspectiveCropSuggestion;
    _Bool __autoCropAdjusted;
    _Bool __autoCropReset;
    double _originalDuration;
}

@property (weak, nonatomic, readonly) NSArray *_autoCropKeys;
@property (nonatomic, setter=_setHasCropSuggestion:) _Bool _hasCropSuggestion;
@property (nonatomic, setter=_setHasPerspectiveCropSuggestion:) _Bool _hasPerspectiveCropSuggestion;
@property (nonatomic, setter=_setAutoCropAdjusted:) _Bool _autoCropAdjusted;
@property (nonatomic, setter=_setAutoCropReset:) _Bool _autoCropReset;
@property (nonatomic) _Bool toggledOriginal;
@property (nonatomic) _Bool pluginStarted;
@property (nonatomic) _Bool pluginSaved;
@property (nonatomic) _Bool shouldUseVideoKeys;
@property (nonatomic) double originalDuration;

- (struct __CFString *)_keyForSessionEnd:(long long)arg1;
- (void)notifyDidApplyAutoCrop;
- (void)notifyDidApplyPerspectiveAutoCrop;
- (void)notifyDidResetCrop;
- (void)notifyDidAdjustCrop;
- (id)_sessionKeysWithEnd:(long long)arg1;
- (void)_recordKeys:(id)arg1;
- (void)finishSessionWithEnd:(long long)arg1 newCompositionController:(id)arg2 oldCompositionController:(id)arg3;
- (void)finishSessionWithEnd:(long long)arg1;

@end
