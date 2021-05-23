/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerColorVariant : NSObject

{
    UIColor *_color;
    NSString *_colorName;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) NSString *colorName;

- (_Bool)isEqual:(id)arg1;
- (id)initWithColor:(id)arg1 named:(id)arg2;

@end
