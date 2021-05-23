/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AMSDialogTextField : NSObject

{
    _Bool _secure;
    long long _keyboardType;
    NSString *_placeholder;
    long long _tag;
    NSString *_text;
}

@property (nonatomic) long long keyboardType;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) _Bool secure;
@property (nonatomic) long long tag;
@property (copy, nonatomic) NSString *text;

+ (_Bool)supportsSecureCoding;
+ (id)textFieldWithPlaceholder:(id)arg1 secure:(_Bool)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
