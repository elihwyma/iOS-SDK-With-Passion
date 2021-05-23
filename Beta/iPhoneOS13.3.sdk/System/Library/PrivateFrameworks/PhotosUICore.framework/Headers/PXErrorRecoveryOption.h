/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXErrorRecoveryOption : NSObject

{
    NSString *_title;
    long long _style;
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long style;

+ (id)recoveryOptionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;

- (id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_attemptRecoveryFromError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
