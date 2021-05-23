/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIColor, UIVisualEffect;

@interface UITableViewRowAction : NSObject <Swift>

{
    long long _style;
    NSString *_title;
    UIColor *_backgroundColor;
    CDUnknownBlockType _handler;
    UIVisualEffect *_backgroundEffect;
}

@property (nonatomic, readonly, getter=_handler) CDUnknownBlockType handler;
@property (nonatomic, readonly) long long style;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIVisualEffect *backgroundEffect;

+ (id)rowActionWithStyle:(long long)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_button;
- (id)_initWithStyle:(long long)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_setButton:(id)arg1;

@end
