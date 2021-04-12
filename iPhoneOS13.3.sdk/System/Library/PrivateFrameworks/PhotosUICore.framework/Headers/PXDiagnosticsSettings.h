//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXDiagnosticsSettings : PXSettings
{
    BOOL _enableContextualGesture;
    BOOL _enableInternalSettingsService;
    BOOL _enableGenericService;
    BOOL _enableGraphService;
    BOOL _enableTitleFontService;
    BOOL _enableCompleteMyMomentService;
    BOOL _enableDebugDictionaryService;
    BOOL _enableScrollService;
    double _scrollSpeed;
    long long _scrollIterations;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) long long scrollIterations; // @synthesize scrollIterations=_scrollIterations;
@property(nonatomic) double scrollSpeed; // @synthesize scrollSpeed=_scrollSpeed;
@property(nonatomic) BOOL enableScrollService; // @synthesize enableScrollService=_enableScrollService;
@property(nonatomic) BOOL enableDebugDictionaryService; // @synthesize enableDebugDictionaryService=_enableDebugDictionaryService;
@property(nonatomic) BOOL enableCompleteMyMomentService; // @synthesize enableCompleteMyMomentService=_enableCompleteMyMomentService;
@property(nonatomic) BOOL enableTitleFontService; // @synthesize enableTitleFontService=_enableTitleFontService;
@property(nonatomic) BOOL enableGraphService; // @synthesize enableGraphService=_enableGraphService;
@property(nonatomic) BOOL enableGenericService; // @synthesize enableGenericService=_enableGenericService;
@property(nonatomic) BOOL enableInternalSettingsService; // @synthesize enableInternalSettingsService=_enableInternalSettingsService;
@property(nonatomic) BOOL enableContextualGesture; // @synthesize enableContextualGesture=_enableContextualGesture;
- (void)setDefaultValues;
- (id)parentSettings;

@end

