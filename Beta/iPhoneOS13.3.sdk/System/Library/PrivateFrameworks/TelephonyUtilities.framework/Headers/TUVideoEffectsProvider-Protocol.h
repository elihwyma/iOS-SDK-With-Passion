/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSArray, TUVideoEffect;

@protocol TUVideoEffectsProvider <Swift>

@property (retain, nonatomic) TUVideoEffect *currentVideoEffect;
@property (nonatomic, readonly) NSArray *availableVideoEffects;

- (unsigned short)thumbnailImageForVideoEffectName: /* Error: Ran out of types for this method. */;

@end
