/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSDate, PDFPageLayerEffect;

__attribute__((visibility("hidden")))
@interface PDFCoachMark : NSObject

{
    NSDate *creationTime;
    struct CGRect frame;
    PDFPageLayerEffect *layerEffect;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)playEffect:(id)arg1;
- (double)effectTimeLeft;

@end
