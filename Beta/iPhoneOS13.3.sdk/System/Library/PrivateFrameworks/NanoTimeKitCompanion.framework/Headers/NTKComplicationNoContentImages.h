/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface NTKComplicationNoContentImages : NSObject

{
    UIImage *_modularSmallImage;
    UIImage *_utilitarianSmallImage;
    UIImage *_circularSmallImage;
    UIImage *_extraLargeImage;
}

@property (retain, nonatomic) UIImage *modularSmallImage;
@property (retain, nonatomic) UIImage *utilitarianSmallImage;
@property (retain, nonatomic) UIImage *circularSmallImage;
@property (retain, nonatomic) UIImage *extraLargeImage;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
