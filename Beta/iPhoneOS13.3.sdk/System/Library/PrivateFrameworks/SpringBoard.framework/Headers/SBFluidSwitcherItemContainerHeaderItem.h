/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, UIColor, UIImage;

@interface SBFluidSwitcherItemContainerHeaderItem : NSObject <Swift>

{
    NSString *_titleText;
    NSString *_subtitleText;
    UIImage *_image;
    UIColor *_titleTextColor;
    long long _subtitleInterfaceStyle;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (nonatomic) long long subtitleInterfaceStyle;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
