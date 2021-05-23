/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CXCallFailureContext : NSObject

{
    _Bool _hasWiFiSettingsRemediation;
    _Bool _hasCellularSettingsRemediation;
    _Bool _hasDateAndTimeSettingsRemediation;
    _Bool _hasLocationSettingsRemediation;
    NSString *_title;
    NSString *_message;
    long long _failureReason;
    long long _providerErrorCode;
    long long _providerEndedReason;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long failureReason;
@property (nonatomic) long long providerErrorCode;
@property (nonatomic) long long providerEndedReason;
@property (nonatomic) _Bool hasWiFiSettingsRemediation;
@property (nonatomic) _Bool hasCellularSettingsRemediation;
@property (nonatomic) _Bool hasDateAndTimeSettingsRemediation;
@property (nonatomic) _Bool hasLocationSettingsRemediation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)sanitizedCopy;

@end
