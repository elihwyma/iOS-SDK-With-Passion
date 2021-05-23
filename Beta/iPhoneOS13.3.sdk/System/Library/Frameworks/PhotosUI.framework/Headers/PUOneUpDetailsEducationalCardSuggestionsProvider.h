/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUOneUpSuggestionsProvider.h>

@class PUOneUpAccessoryViewControllersManager;

__attribute__((visibility("hidden")))
@interface PUOneUpDetailsEducationalCardSuggestionsProvider : PUOneUpSuggestionsProvider

{
    PUOneUpAccessoryViewControllersManager *_accessoryViewControllersManager;
}

@property (nonatomic, readonly) PUOneUpAccessoryViewControllersManager *accessoryViewControllersManager;

+ (id)_userDefaults;
+ (void)setDidDisplayEducationalCard:(_Bool)arg1;
+ (_Bool)didDisplayEducationalCard;

- (id)init;
- (_Bool)canProvideSuggestionForAsset:(id)arg1;
- (id)requestSuggestionForAsset:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (id)initWithAccessoryViewControllersManager:(id)arg1;

@end
