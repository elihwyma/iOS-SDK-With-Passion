/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIColor, UIImage;

@interface UIPreviewActionGroup : NSObject <Swift>

{
    NSString *_title;
    UIImage *_image;
    NSString *_identifier;
    UIColor *_color;
    long long _style;
    NSArray *_actions;
}

@property (copy, nonatomic, getter=_actions, setter=_setActions:) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long style;
@property (retain, nonatomic, getter=_color, setter=_setColor:) UIColor *color;
@property (retain, nonatomic) UIImage *image;

+ (id)_actionGroupWithPreviewMenuItemWithSubactions:(id)arg1;
+ (id)actionGroupWithTitle:(id)arg1 style:(long long)arg2 actions:(id)arg3;
+ (id)_actionGroupWithTitle:(id)arg1 style:(long long)arg2 color:(id)arg3 actions:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_effectiveColor;
- (id)_effectiveImage;

@end
