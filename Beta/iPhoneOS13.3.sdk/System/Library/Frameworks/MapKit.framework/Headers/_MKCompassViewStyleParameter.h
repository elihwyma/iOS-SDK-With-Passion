/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _MKCompassViewStyleParameter : NSObject

{
    NSString *_imageNamePart;
    UIColor *_textColor;
    UIColor *_backgroundColor;
}

@property (copy, nonatomic) NSString *imageNamePart;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *backgroundColor;

@end
