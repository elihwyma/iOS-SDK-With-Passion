/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSTwoFactorEntryTextField : NSObject

{
    _Bool _autoShowKeyboard;
    NSString *_label;
    unsigned long long _expectedLength;
    NSString *_text;
    long long _keyboardType;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _returnKeyType;
}

@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned long long expectedLength;
@property (nonatomic) _Bool autoShowKeyboard;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long returnKeyType;

- (id)init;

@end
