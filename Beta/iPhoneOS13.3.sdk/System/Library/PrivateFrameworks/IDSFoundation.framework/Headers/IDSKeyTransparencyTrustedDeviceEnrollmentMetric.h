/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface IDSKeyTransparencyTrustedDeviceEnrollmentMetric : NSObject

{
    _Bool _cloudKitSuccess;
    _Bool _accountKeySuccess;
    unsigned long long _keyTransparencyVersion;
    NSString *_cloudKitErrorDomain;
    long long _cloudKitErrorCode;
    NSString *_cloudKitUnderlyingErrorDomain;
    long long _cloudKitUnderlyingErrorCode;
    double _cloudKitOperationTimeInterval;
    NSString *_accountKeyErrorDomain;
    long long _accountKeyErrorCode;
    NSString *_accountKeyUnderlyingErrorDomain;
    long long _accountKeyUnderlyingErrorCode;
    double _accountKeyOperationTimeInterval;
}

@property (nonatomic, readonly) unsigned long long keyTransparencyVersion;
@property (nonatomic, readonly) _Bool cloudKitSuccess;
@property (nonatomic, readonly) NSString *cloudKitErrorDomain;
@property (nonatomic, readonly) long long cloudKitErrorCode;
@property (nonatomic, readonly) NSString *cloudKitUnderlyingErrorDomain;
@property (nonatomic, readonly) long long cloudKitUnderlyingErrorCode;
@property (nonatomic, readonly) double cloudKitOperationTimeInterval;
@property (nonatomic, readonly) _Bool accountKeySuccess;
@property (nonatomic, readonly) NSString *accountKeyErrorDomain;
@property (nonatomic, readonly) long long accountKeyErrorCode;
@property (nonatomic, readonly) NSString *accountKeyUnderlyingErrorDomain;
@property (nonatomic, readonly) long long accountKeyUnderlyingErrorCode;
@property (nonatomic, readonly) double accountKeyOperationTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *name;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned short rtcType;

- (id)initWithKeyTransparencyVersion:(unsigned long long)arg1 cloudKitSuccess:(_Bool)arg2 cloudKitErrorDomain:(id)arg3 cloudKitErrorCode:(long long)arg4 cloudKitUnderlyingErrorDomain:(id)arg5 cloudKitUnderlyingErrorCode:(long long)arg6 cloudKitOperationTimeInterval:(double)arg7 accountKeySuccess:(_Bool)arg8 accountKeyErrorDomain:(id)arg9 accountKeyErrorCode:(long long)arg10 accountKeyUnderlyingErrorDomain:(id)arg11 accountKeyUnderlyingErrorCode:(long long)arg12 accountKeyOperationTimeInterval:(double)arg13;

@end
