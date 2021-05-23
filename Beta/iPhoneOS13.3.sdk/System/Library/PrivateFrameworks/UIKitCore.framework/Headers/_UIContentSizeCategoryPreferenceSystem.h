/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIContentSizeCategoryPreference.h>

__attribute__((visibility("hidden")))
@interface _UIContentSizeCategoryPreferenceSystem : UIContentSizeCategoryPreference

{
    _Bool _observingNotification;
    _Bool _didCheckForPreferredContentSizeCategoryOverride;
    _Bool _applicationOverridesPreferredContentSizeCategory;
    UIContentSizeCategoryPreference *_overridePreferences;
}

@property (retain, nonatomic) UIContentSizeCategoryPreference *overridePreferences;

- (void)dealloc;
- (id)description;
- (void)checkForChanges;
- (id)initAsSystem;
- (void)_readAndObservePreferences;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)_updateContentSizeCategoriesFromUserDefaultsPostingNotification:(_Bool)arg1;
- (void)_beginObservingPreferredContentSizeChangedNotification;
- (void)_endObservingPreferredContentSizeChangedNotification;
- (void)_updateContentSizeCategory:(id)arg1 carPlay:(id)arg2 postingNotification:(_Bool)arg3;
- (void)_postContentSizeCategoryDidChangeNotification;

@end
