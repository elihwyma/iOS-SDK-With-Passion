/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SUComposeTextFieldConfiguration : NSObject

{
    struct UIEdgeInsets _borderInsets;
    _Bool _isRequired;
    NSString *_label;
    unsigned long long _maxLength;
    NSString *_placeholder;
    NSString *_value;
}

@property (nonatomic) struct UIEdgeInsets borderInsets;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) unsigned long long maxLength;
@property (retain, nonatomic) NSString *placeholder;
@property (nonatomic, getter=isRequired) _Bool required;
@property (retain, nonatomic) NSString *value;

- (void)dealloc;

@end
