/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@interface SiriUIDeviceInfo : NSObject

{
    _Bool _deviceZoomed;
    _Bool _largeFormatPhone;
    _Bool _deviceShouldUseFrozenBackdropSnapshot;
    _Bool _deviceShouldFreezeAura;
    _Bool _deviceShouldDeferFlamesView;
    _Bool _deviceSupportsProximitySensor;
    _Bool _deviceShouldSkipGuidePreloading;
}

@property (nonatomic, readonly, getter=isDeviceZoomed) _Bool deviceZoomed;
@property (nonatomic, readonly, getter=isLargeFormatPhone) _Bool largeFormatPhone;
@property (nonatomic, readonly) _Bool deviceShouldUseFrozenBackdropSnapshot;
@property (nonatomic, readonly) _Bool deviceShouldFreezeAura;
@property (nonatomic, readonly) _Bool deviceShouldDeferFlamesView;
@property (nonatomic, readonly) _Bool deviceShouldSkipGuidePreloading;
@property (nonatomic, readonly) _Bool deviceSupportsProximitySensor;

+ (id)sharedInstance;

- (id)initWithLargeFormatPhone:(_Bool)arg1 gestaltModes:(id)arg2 screenSize:(struct CGSize)arg3;
- (void)_updateProductTypeDerivedProperties;

@end
