/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface NSError : NSObject <Swift>

{
    void *_reserved;
    long long _code;
    NSString *_domain;
    NSDictionary *_userInfo;
}

@property (copy, readonly) NSString *domain;
@property (readonly) long long code;
@property (copy, readonly) NSDictionary *userInfo;
@property (copy, readonly) NSString *localizedDescription;
@property (copy, readonly) NSString *localizedFailureReason;
@property (copy, readonly) NSString *localizedRecoverySuggestion;
@property (copy, readonly) NSArray *localizedRecoveryOptions;
@property (readonly) id recoveryAttempter;
@property (copy, readonly) NSString *helpAnchor;

+ (_Bool)supportsSecureCoding;
+ (id)_readCorruptErrorWithFormat:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (void)setUserInfoValueProviderForDomain:(id)arg1 provider:(CDUnknownBlockType)arg2;
+ (CDUnknownBlockType)userInfoValueProviderForDomain:(id)arg1;
+ (void)_registerFormatter:(CDUnknownFunctionPointerType)arg1 forErrorKey:(id)arg2 parameters:(const char *)arg3;
+ (void)_registerBuiltInFormatters;
+ (void)_setFileNameLocalizationEnabled:(_Bool)arg1;
+ (void)_web_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3;
+ (id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 URL:(id)arg3;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)_cfTypeID;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)_cocoaErrorString:(id)arg1;
- (id)_cocoaErrorStringWithKind:(id)arg1 variant:(id)arg2;
- (id)_cocoaErrorStringWithKind:(id)arg1;
- (struct __CFString *)_retainedUserInfoCallBackForKey:(id)arg1;
- (long long)_collectApplicableUserInfoFormatters:(CDStruct_183601bc **)arg1 max:(long long)arg2;
- (id)_formatCocoaErrorString:(id)arg1 parameters:(const char *)arg2 applicableFormatters:(CDStruct_183601bc **)arg3 count:(long long)arg4;
- (id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3;
- (id)_web_initWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3;
- (id)_web_initWithDomain_nowarn:(id)arg1 code:(long long)arg2 URL:(id)arg3;
- (id)_web_failingURL;
- (_Bool)_web_errorIsInDomain:(id)arg1;
- (id)_web_localizedDescription;

@end
