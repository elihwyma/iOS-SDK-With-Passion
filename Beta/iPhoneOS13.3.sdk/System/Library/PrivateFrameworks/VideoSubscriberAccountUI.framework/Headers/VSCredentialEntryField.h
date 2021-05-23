/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryField : NSObject

{
    _Bool _secure;
    _Bool _required;
    NSString *_title;
    NSString *_placeholder;
    long long _keyboardType;
    NSString *_text;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _returnKeyType;
    NSString *_identifier;
    NSString *_recentsTitle;
    NSString *_recentsMessage;
}

@property (copy, nonatomic) NSString *recentsTitle;
@property (copy, nonatomic) NSString *recentsMessage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) long long keyboardType;
@property (nonatomic, getter=isSecure) _Bool secure;
@property (copy, nonatomic) NSString *text;
@property (nonatomic, getter=isRequired) _Bool required;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, readonly) NSString *identifier;

- (id)init;

@end
