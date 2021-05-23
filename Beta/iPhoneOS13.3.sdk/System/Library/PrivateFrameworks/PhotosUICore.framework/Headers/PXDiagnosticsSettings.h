/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXDiagnosticsSettings : PXSettings

{
    _Bool _enableContextualGesture;
    _Bool _enableInternalSettingsService;
    _Bool _enableGenericService;
    _Bool _enableGraphService;
    _Bool _enableTitleFontService;
    _Bool _enableCompleteMyMomentService;
    _Bool _enableDebugDictionaryService;
    _Bool _enableScrollService;
    double _scrollSpeed;
    long long _scrollIterations;
}

@property (nonatomic) _Bool enableContextualGesture;
@property (nonatomic) _Bool enableInternalSettingsService;
@property (nonatomic) _Bool enableGenericService;
@property (nonatomic) _Bool enableGraphService;
@property (nonatomic) _Bool enableTitleFontService;
@property (nonatomic) _Bool enableCompleteMyMomentService;
@property (nonatomic) _Bool enableDebugDictionaryService;
@property (nonatomic) _Bool enableScrollService;
@property (nonatomic) double scrollSpeed;
@property (nonatomic) long long scrollIterations;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
