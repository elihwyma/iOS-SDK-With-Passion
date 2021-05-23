/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/_NTKKeylineImageView.h>

@class NSString, NTKKeylineTouchable, UIColor, UIView;

@protocol NTKKeylineView;

@interface _NTKCompoundKeylineImageView : _NTKKeylineImageView

{
    UIView<NTKKeylineView> *_secondaryKeylineView;
}

@property (retain, nonatomic) UIView<NTKKeylineView> *secondaryKeylineView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) _Bool usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (nonatomic, readonly) UIColor *contentColor;
@property (retain, nonatomic) NTKKeylineTouchable *touchable;

+ (id)keylineWithImage:(id)arg1 secondaryKeylineView:(id)arg2;

- (void)layoutSubviews;

@end
