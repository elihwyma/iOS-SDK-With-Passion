/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

#import <NSObject.h>

@class CARScreenViewArea, NSArray, NSString, NSURL;

@interface CARScreenInfo : NSObject

{
    _Bool _limitedUI;
    _Bool _nightMode;
    _Bool _supportsHighFidelityTouch;
    NSString *_identifier;
    unsigned long long _screenType;
    unsigned long long _limitedUIElements;
    unsigned long long _maxFramesPerSecond;
    NSArray *_viewAreas;
    CARScreenViewArea *_currentViewArea;
    CARScreenViewArea *_adjacentViewArea;
    unsigned long long _currentViewAreaTransitionControlType;
    NSURL *_initialURL;
    unsigned long long _systemAvailableInteractionModels;
    unsigned long long _systemPrimaryInteractionModel;
    struct CGSize _physicalSize;
    struct CGSize _pixelSize;
}

@property (nonatomic) unsigned long long systemAvailableInteractionModels;
@property (nonatomic) unsigned long long systemPrimaryInteractionModel;
@property (nonatomic) unsigned long long currentViewAreaTransitionControlType;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long screenType;
@property (nonatomic, readonly, getter=isLimitedUI) _Bool limitedUI;
@property (nonatomic, readonly) unsigned long long limitedUIElements;
@property (nonatomic, readonly, getter=isNightMode) _Bool nightMode;
@property (nonatomic, readonly) unsigned long long availableInteractionModels;
@property (nonatomic, readonly) unsigned long long primaryInteractionModel;
@property (nonatomic, readonly) _Bool supportsHighFidelityTouch;
@property (nonatomic, readonly) unsigned long long maxFramesPerSecond;
@property (nonatomic, readonly) struct CGSize physicalSize;
@property (nonatomic, readonly) struct CGSize pixelSize;
@property (copy, nonatomic, readonly) NSArray *viewAreas;
@property (retain, nonatomic) CARScreenViewArea *currentViewArea;
@property (retain, nonatomic) CARScreenViewArea *adjacentViewArea;
@property (nonatomic, readonly) NSURL *initialURL;

- (id)description;
- (id)initWithPropertySupplier:(CDUnknownBlockType)arg1 screenType:(unsigned long long)arg2 additionalInsets:(struct NSEdgeInsets)arg3;
- (id)_descriptionForInteractionModel:(unsigned long long)arg1;
- (_Bool)_currentProcessHasEntitlement;
- (id)descriptionForAvailableInteractionModels;
- (id)descriptionForPrimaryInteractionModel;
- (id)initWithPropertySupplier:(CDUnknownBlockType)arg1 screenType:(unsigned long long)arg2;
- (void)nightModeChanged:(_Bool)arg1;
- (void)limitedUIChanged:(_Bool)arg1;

@end
