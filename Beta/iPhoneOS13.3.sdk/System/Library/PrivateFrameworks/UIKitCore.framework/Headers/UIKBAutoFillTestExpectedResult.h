/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestExpectedResult : NSObject <Swift>

{
    NSMutableDictionary *_textFieldTagToTextFieldType;
    long long _formType;
}

@property (nonatomic) long long formType;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)typeForTextFieldWithTag:(long long)arg1;
- (void)setType:(long long)arg1 forTextFieldWithTag:(long long)arg2;

@end
