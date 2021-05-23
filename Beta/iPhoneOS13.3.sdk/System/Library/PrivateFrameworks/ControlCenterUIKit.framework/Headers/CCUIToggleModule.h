/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <Foundation/NSObject.h>

@class CCUICAPackageDescription, CCUIContentModuleContext, NSHashTable, NSString, UIColor, UIImage, UIViewController;

@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@interface CCUIToggleModule : NSObject

{
    NSHashTable *_contentViewControllers;
    CCUIContentModuleContext *_contentModuleContext;
    CCUICAPackageDescription *_glyphPackageDescription;
}

@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (copy, nonatomic, readonly) UIImage *iconGlyph;
@property (copy, nonatomic, readonly) UIImage *selectedIconGlyph;
@property (copy, nonatomic, readonly) UIColor *selectedColor;
@property (copy, nonatomic, readonly) CCUICAPackageDescription *glyphPackageDescription;
@property (copy, nonatomic, readonly) NSString *glyphState;
@property (nonatomic, readonly) double glyphScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (nonatomic, readonly) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;

- (void)refreshState;
- (void)reconfigureView;
- (id)contentViewControllerForContext:(id)arg1;
- (id)glyphPackage;

@end
