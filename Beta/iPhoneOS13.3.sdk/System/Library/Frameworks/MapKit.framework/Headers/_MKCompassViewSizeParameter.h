/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface _MKCompassViewSizeParameter : NSObject

{
    NSString *_imageNamePart;
    double _diameter;
    UIFont *_font;
    double _textOffsetFromCenter;
}

@property (copy, nonatomic) NSString *imageNamePart;
@property (nonatomic) double diameter;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double textOffsetFromCenter;

@end
