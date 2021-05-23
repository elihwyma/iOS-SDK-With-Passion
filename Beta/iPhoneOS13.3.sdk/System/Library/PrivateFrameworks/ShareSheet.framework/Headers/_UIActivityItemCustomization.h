/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _UIActivityItemCustomization : NSObject

{
    _Bool _enabled;
    NSString *_title;
    NSString *_footerText;
    NSString *_identifier;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *footerText;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic) _Bool enabled;

+ (id)switchCustomizationWithTitle:(id)arg1 identifier:(id)arg2 footerText:(id)arg3 value:(_Bool)arg4 valueChangedHandler:(CDUnknownBlockType)arg5;
+ (id)pickerCustomizationWithIdentifier:(id)arg1 options:(id)arg2 selectedOptionIndex:(long long)arg3 footerText:(id)arg4 valueChangedHandler:(CDUnknownBlockType)arg5;
+ (id)actionCustomizationWithTitle:(id)arg1 identifier:(id)arg2 footerText:(id)arg3 handler:(CDUnknownBlockType)arg4;

- (id)_initWithTitle:(id)arg1 identifier:(id)arg2 footerText:(id)arg3;

@end
