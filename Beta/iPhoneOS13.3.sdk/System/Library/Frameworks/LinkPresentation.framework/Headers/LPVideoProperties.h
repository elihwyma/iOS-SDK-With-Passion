/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface LPVideoProperties : NSObject

{
    _Bool _hasAudio;
    NSString *_accessibilityText;
    UIColor *__overlappingControlsColor;
}

@property (retain, nonatomic, setter=_setOverlappingControlsColor:) UIColor *_overlappingControlsColor;
@property (nonatomic) _Bool hasAudio;
@property (copy, nonatomic) NSString *accessibilityText;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
