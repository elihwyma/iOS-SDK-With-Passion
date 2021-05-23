/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface _HKGraphViewAnnotationEntry : NSObject

{
    NSString *_annotation;
    UIColor *_textColor;
    id _modelCoordinate;
}

@property (retain, nonatomic) NSString *annotation;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) id modelCoordinate;

@end
