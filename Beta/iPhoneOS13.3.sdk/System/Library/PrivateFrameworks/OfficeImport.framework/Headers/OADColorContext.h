/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADColorMap, OADColorScheme;

@protocol OADColorPalette;

__attribute__((visibility("hidden")))
@interface OADColorContext : NSObject

{
    OADColorScheme *mScheme;
    OADColorMap *mMap;
    id <OADColorPalette> mPalette;
}

@property (nonatomic, readonly) OADColorScheme *scheme;
@property (nonatomic, readonly) OADColorMap *map;
@property (retain, nonatomic) id <OADColorPalette> palette;

+ (id)colorContextWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3;
- (void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2;

@end
