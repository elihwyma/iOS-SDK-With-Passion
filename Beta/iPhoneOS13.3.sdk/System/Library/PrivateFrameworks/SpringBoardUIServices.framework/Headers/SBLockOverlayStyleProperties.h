/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <Foundation/NSObject.h>

@class UIColor, _UIBackdropViewSettings;

@interface SBLockOverlayStyleProperties : NSObject

{
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_tintColor;
    double _tintAlpha;
    double _blurRadius;
    unsigned long long _style;
    long long _quality;
    _UIBackdropViewSettings *_settings;
}

@property (nonatomic, readonly) double tintAlpha;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly) double blurRadius;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, readonly) long long graphicsQuality;

- (id)description;
- (void)_configure;
- (id)initWithStyle:(unsigned long long)arg1 quality:(long long)arg2;
- (id)_stringForStyle;
- (id)_stringForQuality;
- (id)_settingsForStyle;

@end
