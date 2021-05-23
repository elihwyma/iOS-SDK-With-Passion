/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIColor, UIImage;

@interface _UIBannerContent : NSObject <Swift>

{
    NSString *_title;
    NSString *_body;
    NSString *_imageName;
    UIImage *_image;
    UIColor *_backgroundColor;
    UIColor *_contentColor;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *contentColor;

+ (_Bool)supportsSecureCoding;
+ (id)bannerContentWithTitle:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
