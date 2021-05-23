/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface _UIAction : NSObject

{
    unsigned long long _options;
    long long _type;
    NSString *_title;
    UIImage *_image;
    long long _style;
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (nonatomic) long long style;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)actionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)performAction;
- (id)_apiRepresentation;

@end
