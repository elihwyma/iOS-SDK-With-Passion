/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIAlertAction.h>

@interface TPAlertAction : UIAlertAction

{
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler;

+ (id)actionWithType:(unsigned long long)arg1;
+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)preferencesURLForClassName:(id)arg1;

@end
