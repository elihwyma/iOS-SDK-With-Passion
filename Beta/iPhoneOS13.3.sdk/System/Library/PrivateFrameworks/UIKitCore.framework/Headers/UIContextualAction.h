/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIImage;

@interface UIContextualAction : NSObject

{
    _Bool _forcesFallbackBackgroundColor;
    long long _style;
    CDUnknownBlockType _handler;
    NSString *_title;
    UIColor *_backgroundColor;
    UIImage *_image;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _preHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (nonatomic) _Bool forcesFallbackBackgroundColor;
@property (nonatomic, readonly) _Bool isDestructive;
@property (copy, nonatomic) CDUnknownBlockType preHandler;
@property (nonatomic, readonly) long long style;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIImage *image;

+ (id)contextualActionWithStyle:(long long)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;

- (id)description;
- (void)cancel;
- (void)_completeWithResult:(_Bool)arg1;
- (void)executePreHandlerWithView:(id)arg1;
- (void)executeHandlerWithView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
