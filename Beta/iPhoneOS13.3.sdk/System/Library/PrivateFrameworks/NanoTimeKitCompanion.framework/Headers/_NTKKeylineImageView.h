/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKColoringImageView.h>

@class NSString, NTKKeylineTouchable, UIColor;

@interface _NTKKeylineImageView : NTKColoringImageView

{
    NTKKeylineTouchable *touchable;
    CDUnknownBlockType _colorizationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType colorizationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) _Bool usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (nonatomic, readonly) UIColor *contentColor;
@property (retain, nonatomic) NTKKeylineTouchable *touchable;

@end
