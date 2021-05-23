/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface UISearchToken : NSObject

{
    id _representedObject;
    NSString *_text;
    UIImage *_image;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) id representedObject;

+ (id)tokenWithImage:(id)arg1;
+ (id)tokenWithIcon:(id)arg1 text:(id)arg2;

- (id)_initToken;

@end
