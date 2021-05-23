/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIComposeTextFieldConfiguration : NSObject

{
    struct UIEdgeInsets _borderInsets;
    long long _columnIndex;
    _Bool _isRequired;
    NSString *_label;
    unsigned long long _maxLength;
    NSString *_placeholder;
    NSString *_value;
}

@property (nonatomic) struct UIEdgeInsets borderInsets;
@property (nonatomic) long long columnIndex;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned long long maxLength;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic, getter=isRequired) _Bool required;
@property (copy, nonatomic) NSString *value;

@end
