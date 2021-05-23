/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AMSDialogButton : NSObject

{
    CDUnknownBlockType _handler;
    long long _style;
    NSString *_title;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *title;

+ (id)buttonWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)buttonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;

- (id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;

@end
