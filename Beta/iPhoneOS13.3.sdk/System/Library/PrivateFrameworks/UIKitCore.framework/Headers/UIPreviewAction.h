/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIColor, UIImage;

@interface UIPreviewAction : NSObject <Swift>

{
    NSString *_title;
    UIImage *_image;
    NSString *_identifier;
    UIColor *_color;
    long long _style;
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (nonatomic) long long style;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic, getter=_color, setter=_setColor:) UIColor *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *identifier;

+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)_checkmarkImage;
+ (id)_actionWithTitle:(id)arg1 style:(long long)arg2 color:(id)arg3 image:(id)arg4 handler:(CDUnknownBlockType)arg5;
+ (id)_actionWithTitle:(id)arg1 style:(long long)arg2 image:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)_actionWithTitle:(id)arg1 color:(id)arg2 image:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)_actionWithPreviewMenuItem:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_effectiveColor;
- (id)_effectiveImage;

@end
