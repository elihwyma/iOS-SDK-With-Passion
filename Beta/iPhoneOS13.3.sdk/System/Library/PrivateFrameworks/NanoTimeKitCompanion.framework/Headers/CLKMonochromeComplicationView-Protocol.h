/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@protocol CLKMonochromeFilterProvider;

@protocol CLKMonochromeComplicationView <Swift>

@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

- (unsigned short)transitionToMonochromeWithFraction: /* Error: Ran out of types for this method. */;
- (unsigned short)updateMonochromeColor;

@end
