/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <SIMToolkitUI/STKTextSessionData.h>

@class NSString;

@interface STKTextInputSessionData : STKTextSessionData

{
    NSString *_defaultText;
    _Bool _isSecure;
    _Bool _isDigitsOnly;
    unsigned long long _minimumInputLength;
    unsigned long long _maximumInputLength;
}

@property (copy, nonatomic, readonly) NSString *defaultText;
@property (nonatomic, readonly) _Bool isSecure;
@property (nonatomic, readonly) _Bool isDigitsOnly;
@property (nonatomic, readonly) unsigned long long minimumInputLength;
@property (nonatomic, readonly) unsigned long long maximumInputLength;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1;

@end
