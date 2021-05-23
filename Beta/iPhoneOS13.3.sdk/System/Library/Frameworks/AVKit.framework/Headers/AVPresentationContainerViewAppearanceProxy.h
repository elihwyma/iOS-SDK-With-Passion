/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class NSString, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface AVPresentationContainerViewAppearanceProxy : NSObject

{
    _Bool _clipsToBounds;
    UIView *_actualView;
    NSString *_cornerCurve;
    unsigned long long _maskedCorners;
    double _cornerRadius;
    UIColor *_backgroundColor;
}

@property (weak, nonatomic) UIView *actualView;
@property (retain, nonatomic) NSString *cornerCurve;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) _Bool clipsToBounds;

@end
