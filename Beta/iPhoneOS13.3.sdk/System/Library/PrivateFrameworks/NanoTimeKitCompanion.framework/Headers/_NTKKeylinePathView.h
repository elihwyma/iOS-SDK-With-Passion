/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKColoringView.h>

@class NSString, NTKKeylineTouchable, UIBezierPath, UIColor;

@interface _NTKKeylinePathView : NTKColoringView

{
    UIBezierPath *_path;
    UIBezierPath *_secondPath;
    NTKKeylineTouchable *touchable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) _Bool usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (nonatomic, readonly) UIColor *contentColor;
@property (retain, nonatomic) NTKKeylineTouchable *touchable;

- (id)initWithPath:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithPath:(id)arg1 secondPath:(id)arg2;

@end
