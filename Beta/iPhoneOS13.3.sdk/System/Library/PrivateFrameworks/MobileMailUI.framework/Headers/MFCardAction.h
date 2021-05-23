/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface MFCardAction : NSObject

{
    _Bool _handlerEnabled;
    _Bool _shouldDismissCardBeforeExecuteHandler;
    NSString *_imageName;
    UIColor *_tintColor;
    NSString *_title;
    CDUnknownBlockType _handler;
}

@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) UIColor *tintColor;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) _Bool handlerEnabled;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (nonatomic) _Bool shouldDismissCardBeforeExecuteHandler;

+ (id)cardActionWithTitle:(id)arg1 imageName:(id)arg2 tintColor:(id)arg3 handlerEnabled:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;
+ (id)cardActionWithTitle:(id)arg1 imageName:(id)arg2 tintColor:(id)arg3 handler:(CDUnknownBlockType)arg4;

- (void)executeHandler;
- (void)executeHandlerIfEnabled;

@end
