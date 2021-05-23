/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSString, WFAlert;

@interface WFAlertButton : NSObject

{
    _Bool _preferred;
    NSString *_title;
    long long _style;
    CDUnknownBlockType _handler;
    WFAlert *_alert;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType handler;
@property (weak, nonatomic) WFAlert *alert;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly, getter=isPreferred) _Bool preferred;

+ (id)buttonWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)cancelButtonWithHandler:(CDUnknownBlockType)arg1;
+ (id)okButtonWithHandler:(CDUnknownBlockType)arg1;
+ (id)buttonWithTitle:(id)arg1 style:(long long)arg2 preferred:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)cancelButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)okButtonWithTarget:(id)arg1 action:(SEL)arg2;

- (id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3 preferred:(_Bool)arg4;

@end
