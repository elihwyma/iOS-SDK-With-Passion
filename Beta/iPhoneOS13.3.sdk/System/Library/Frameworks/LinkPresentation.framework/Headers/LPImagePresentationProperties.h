/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface LPImagePresentationProperties : NSObject

{
    _Bool _shouldApplyBackground;
    _Bool _requireFixedSize;
    long long _filter;
    long long _scalingMode;
    UIColor *_backgroundColor;
    UIColor *_maskColor;
}

@property (nonatomic) long long filter;
@property (nonatomic) long long scalingMode;
@property (nonatomic) _Bool shouldApplyBackground;
@property (nonatomic) _Bool requireFixedSize;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *maskColor;

- (id)init;

@end
