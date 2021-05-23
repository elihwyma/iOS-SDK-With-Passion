/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface UIActivityItemCustomization : NSObject

{
    _Bool _enabled;
    NSString *_title;
    NSString *_identifier;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic) _Bool enabled;

+ (id)switchCustomizationWithTitle:(id)arg1 identifier:(id)arg2 value:(_Bool)arg3 valueChangedHandler:(CDUnknownBlockType)arg4;
+ (id)pickerCustomizationWithTitle:(id)arg1 identifier:(id)arg2 options:(id)arg3 selectedOptionIndex:(long long)arg4 valueChangedHandler:(CDUnknownBlockType)arg5;
+ (id)actionCustomizationWithTitle:(id)arg1 identifier:(id)arg2 handler:(CDUnknownBlockType)arg3;

- (id)_initWithTitle:(id)arg1 identifier:(id)arg2;

@end
