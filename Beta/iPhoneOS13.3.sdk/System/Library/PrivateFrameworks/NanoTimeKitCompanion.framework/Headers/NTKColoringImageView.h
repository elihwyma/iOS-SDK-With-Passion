/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIImageView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CLKImageProvider, NSString, UIColor;

@interface NTKColoringImageView : UIImageView <Swift>

{
    UIColor *_overrideColor;
    CLKImageProvider *_imageProvider;
    struct CGSize _maxSize;
}

@property (nonatomic) struct CGSize maxSize;
@property (retain, nonatomic) CLKImageProvider *imageProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) _Bool usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (nonatomic, readonly) UIColor *contentColor;

- (void)setImage:(id)arg1;
- (id)initWithImage:(id)arg1;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;

@end
