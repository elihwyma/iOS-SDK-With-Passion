/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKImageProvider, CLKTextProvider;

@interface StaticTemplateDescription : NSObject

{
    CLKImageProvider *_modularSmallTop;
    CLKTextProvider *_modularSmallBottom;
    CLKTextProvider *_utilityLarge;
    CLKTextProvider *_utilitySmall;
    CLKImageProvider *_utilityImageProvider;
    CLKTextProvider *_modularLargeHeader;
    CLKTextProvider *_modularLargeFirst;
    CLKTextProvider *_modularLargeSecond;
    CLKImageProvider *_circularSmallImage;
    CLKImageProvider *_circularMediumImage;
    CLKImageProvider *_extraLargeTop;
    CLKTextProvider *_extraLargeBottom;
    CLKTextProvider *_signatureBezel;
    CLKTextProvider *_signatureCornerTextProvider;
}

@property (retain, nonatomic) CLKImageProvider *modularSmallTop;
@property (retain, nonatomic) CLKTextProvider *modularSmallBottom;
@property (retain, nonatomic) CLKTextProvider *utilityLarge;
@property (retain, nonatomic) CLKTextProvider *utilitySmall;
@property (retain, nonatomic) CLKImageProvider *utilityImageProvider;
@property (retain, nonatomic) CLKTextProvider *modularLargeHeader;
@property (retain, nonatomic) CLKTextProvider *modularLargeFirst;
@property (retain, nonatomic) CLKTextProvider *modularLargeSecond;
@property (retain, nonatomic) CLKImageProvider *circularSmallImage;
@property (retain, nonatomic) CLKImageProvider *circularMediumImage;
@property (retain, nonatomic) CLKImageProvider *extraLargeTop;
@property (retain, nonatomic) CLKTextProvider *extraLargeBottom;
@property (retain, nonatomic) CLKTextProvider *signatureBezel;
@property (retain, nonatomic) CLKTextProvider *signatureCornerTextProvider;

@end
