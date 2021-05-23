/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CADisplayMode : NSObject

{
    struct CADisplayModePriv *_priv;
}

@property (nonatomic, readonly) unsigned long long width;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) double pixelAspectRatio;
@property (nonatomic, readonly) double refreshRate;
@property (nonatomic, readonly) _Bool isVirtual;
@property (nonatomic, readonly, getter=isHighBandwidth) _Bool highBandwidth;
@property (copy, nonatomic, readonly) NSString *colorMode;
@property (nonatomic, readonly) unsigned long long preferredScale;
@property (copy, nonatomic, readonly) NSString *hdrMode;
@property (copy, nonatomic, readonly) NSString *colorGamut;
@property (nonatomic, readonly) unsigned long long internalRepresentation;

+ (id)_displayModeWithMode:(struct Mode)arg1 display:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct Mode)_mode;
- (id)_display;
- (void)_setPreferredUIScale:(unsigned int)arg1;
- (void)_setWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)_initWithMode:(struct Mode)arg1 display:(id)arg2;

@end
