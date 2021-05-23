/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@interface UIViewControllerPreviewAction : NSObject <Swift>

{
    NSString *_title;
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (copy, nonatomic) NSString *title;

+ (id)actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
