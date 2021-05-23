/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@class NSArray, NSBundle, NSDictionary, NSString, OBImage;

@interface OBPrivacyFlow

{
    NSBundle *_bundle;
    NSString *_splashContentName;
    NSDictionary *_splashPlist;
    _Bool _buttonIconLoaded;
    OBImage *_buttonIcon;
    NSString *_buttonTitle;
    NSString *_buttonCaption;
    NSString *_splashTitle;
    NSString *_splashShortTitle;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long contentVersion;
@property (nonatomic, readonly) _Bool platformSupported;
@property (nonatomic, readonly) _Bool showInCombinedList;
@property (nonatomic, readonly, getter=isPersonallyIdentifiable) _Bool personallyIdentifiable;
@property (nonatomic, readonly) OBImage *buttonIcon;
@property (nonatomic, readonly) NSString *localizedButtonTitle;
@property (nonatomic, readonly) NSString *localizedButtonCaption;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedShortTitle;
@property (nonatomic, readonly) NSArray *localizedContentList;

+ (id)_modelSpecificLocalizedStringKeyForKey:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
+ (id)flowWithBundle:(id)arg1;

- (id)initWithBundle:(id)arg1;
- (id)_iconType;
- (id)localizedContentListForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)localizedTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)_currentPlatform;
- (id)_splashLocalizedStringForKey:(id)arg1 language:(id)arg2 table:(id)arg3 preferredDeviceType:(unsigned long long)arg4;
- (void)setButtonIcon:(id)arg1;
- (_Bool)_conformsToRequirement:(id)arg1;
- (id)_splashLocalizedStringForKey:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3;
- (_Bool)_conformsToRequirements:(id)arg1;
- (id)localizedButtonTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)_textForConditionalItem:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3;
- (id)localizedButtonCaptionForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)localizedShortTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)_bundleImageNamed:(id)arg1;
- (id)initWithSplashContent:(id)arg1;

@end
