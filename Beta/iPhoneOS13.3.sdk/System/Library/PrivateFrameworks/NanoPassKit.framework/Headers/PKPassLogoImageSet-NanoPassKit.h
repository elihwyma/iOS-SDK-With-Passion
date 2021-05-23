/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <PassKitCore/PKPassLogoImageSet.h>

@interface PKPassLogoImageSet (NanoPassKit)

- (void)loadPDFArtFromBundle:(id)arg1 targetSize:(struct CGSize)arg2 scale:(double)arg3;
- (void)resizeWithScreenSize:(struct CGSize)arg1;
- (void)memoryMapImageData;
- (void)loadPDFArtFromBundle:(id)arg1;
- (_Bool)npkHasValidPaymentCardAssets;

@end
