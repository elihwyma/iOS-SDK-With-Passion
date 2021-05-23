/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NTKZeusColorPalette;

@protocol NTKZeusComplicationDisplay <Swift>

@property (nonatomic) unsigned long long style;
@property (nonatomic, readonly) NTKZeusColorPalette *palette;
@property (nonatomic) _Bool legibilityEnabled;

- (unsigned short)applyPalette: /* Error: Ran out of types for this method. */;
- (unsigned short)applyTransitionFraction:fromPalette:toPalette: /* Error: Ran out of types for this method. */;

@end
