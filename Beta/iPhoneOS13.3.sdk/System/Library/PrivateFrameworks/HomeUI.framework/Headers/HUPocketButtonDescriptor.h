/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@protocol NSCopying;

@interface HUPocketButtonDescriptor : NSObject

{
    unsigned long long _style;
    NSString *_title;
    id <NSCopying> _userInfo;
    id _target;
    SEL _action;
    CDUnknownBlockType _block;
}

@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id <NSCopying> userInfo;
@property (nonatomic) unsigned long long style;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (copy, nonatomic) CDUnknownBlockType block;

+ (id)descriptorWithTitle:(id)arg1 style:(unsigned long long)arg2 target:(id)arg3 action:(SEL)arg4 userInfo:(id)arg5;
+ (id)descriptorWithTitle:(id)arg1 style:(unsigned long long)arg2 userInfo:(id)arg3 block:(CDUnknownBlockType)arg4;

- (void)execute;

@end
