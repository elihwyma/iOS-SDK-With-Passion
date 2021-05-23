/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface CNActionItem : NSObject

{
    _Bool _disabled;
    NSString *_type;
    UIImage *_image;
    NSString *_title;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) UIImage *image;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) _Bool disabled;

- (id)description;
- (id)initWithImage:(id)arg1 type:(id)arg2;

@end
