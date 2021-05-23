/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NSSecureCoding;

__attribute__((visibility("hidden")))
@interface WKFocusedElementInfo : NSObject

{
    long long _type;
    struct RetainPtr<NSString> _value;
    _Bool _isUserInitiated;
    struct RetainPtr<NSObject<NSSecureCoding>> _userObject;
    struct RetainPtr<NSString> _placeholder;
    struct RetainPtr<NSString> _label;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *value;
@property (copy, nonatomic, readonly) NSString *placeholder;
@property (copy, nonatomic, readonly) NSString *label;
@property (nonatomic, readonly, getter=isUserInitiated) _Bool userInitiated;
@property (nonatomic, readonly) NSObject<NSSecureCoding> *userObject;

- (id).cxx_construct;
- (id)initWithFocusedElementInformation:(const struct FocusedElementInformation *)arg1 isUserInitiated:(_Bool)arg2 userObject:(id)arg3;

@end
