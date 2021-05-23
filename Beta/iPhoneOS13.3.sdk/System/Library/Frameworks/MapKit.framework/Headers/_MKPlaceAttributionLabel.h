/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface _MKPlaceAttributionLabel : NSObject

{
    UIImage *image;
    double textBaselineOffset;
    double imageBaselineOffset;
    NSString *imagePlaceholder;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double textBaselineOffset;
@property (nonatomic) double imageBaselineOffset;
@property (retain, nonatomic) NSString *imagePlaceholder;

- (id)attributionWithString:(id)arg1;

@end
