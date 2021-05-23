/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIColor, UIImage;

@interface UIPreviewMenuItem : NSObject <Swift>

{
    NSString *identifier;
    NSString *_title;
    CDUnknownBlockType _handler;
    long long _style;
    NSArray *__subitems;
    UIImage *_image;
    UIColor *_color;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (copy, nonatomic, getter=_subitems, setter=_setSubitems:) NSArray *_subitems;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic, getter=_color, setter=_setColor:) UIColor *color;
@property (copy, nonatomic) NSString *identifier;

+ (id)itemWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)itemWithTitle:(id)arg1 style:(long long)arg2 items:(id)arg3;
+ (id)_itemWithTitle:(id)arg1 style:(long long)arg2 image:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)_itemWithTitle:(id)arg1 color:(id)arg2 image:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)itemWithViewControllerPreviewAction:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
