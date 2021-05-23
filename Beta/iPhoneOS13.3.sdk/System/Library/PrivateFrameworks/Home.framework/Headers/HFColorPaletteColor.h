/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class HFColorCollection, NSString, UIColor;

@interface HFColorPaletteColor : NSObject <Swift>

{
    HFColorCollection *_colorCollection;
}

@property (nonatomic, readonly) HFColorCollection *colorCollection;
@property (nonatomic, readonly) UIColor *UIColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithUIColor:(id)arg1;
- (id)initWithColorCollection:(id)arg1;
- (_Bool)isSimilarToColor:(id)arg1;
- (id)dictionaryRepresentationWithPreferredPaletteType:(unsigned long long)arg1;
- (id)colorByAdjustingToColorProfile:(id)arg1;
- (_Bool)isSimilarToColor:(id)arg1 ignoreTemperature:(_Bool)arg2;

@end
