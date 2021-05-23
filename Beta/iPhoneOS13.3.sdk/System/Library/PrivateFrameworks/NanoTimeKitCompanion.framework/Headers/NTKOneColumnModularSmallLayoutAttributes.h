/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKFont;

@interface NTKOneColumnModularSmallLayoutAttributes : NSObject

{
    CLKFont *_subtitleFont;
    double _subtitleBaselineOffset;
    double _marginWidth;
    double _imageOriginY;
    double _imageHeight;
    double _minimumFontSize;
    CLKFont *_titleFont;
    double _titleBaselineOffset;
}

@property (retain, nonatomic) CLKFont *subtitleFont;
@property (nonatomic) double subtitleBaselineOffset;
@property (nonatomic) double marginWidth;
@property (nonatomic) double imageOriginY;
@property (nonatomic) double imageHeight;
@property (nonatomic) double minimumFontSize;
@property (retain, nonatomic) CLKFont *titleFont;
@property (nonatomic) double titleBaselineOffset;

+ (id)attributesForTemplate:(id)arg1 forDevice:(id)arg2;

@end
