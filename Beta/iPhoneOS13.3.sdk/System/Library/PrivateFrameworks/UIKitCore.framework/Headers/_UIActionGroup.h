/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIImage;

@interface _UIActionGroup : NSObject

{
    _Bool _inlineGroup;
    NSArray *_children;
    NSString *_title;
    UIImage *_image;
    long long _style;
    long long _type;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (nonatomic) long long style;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *children;
@property (nonatomic) _Bool inlineGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)groupWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 children:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 children:(id)arg4;
- (id)_apiRepresentation;

@end
