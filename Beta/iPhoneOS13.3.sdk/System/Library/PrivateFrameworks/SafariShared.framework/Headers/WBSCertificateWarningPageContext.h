/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@class NSString, NSURL;

@interface WBSCertificateWarningPageContext : NSObject <Swift>

{
    NSString *_expiredCertificateDescription;
    _Bool _canGoBack;
    NSURL *_failingURL;
    long long _warningCategory;
    long long _numberOfDaysInvalid;
    double _clockSkew;
}

@property (nonatomic, readonly) NSURL *failingURL;
@property (nonatomic, readonly) long long warningCategory;
@property (nonatomic, readonly) _Bool canGoBack;
@property (nonatomic, readonly) long long numberOfDaysInvalid;
@property (nonatomic, readonly) NSString *expiredCerticateDescription;
@property (nonatomic, readonly) double clockSkew;

+ (_Bool)supportsSecureCoding;
+ (_Bool)certificateWarningCannotBeBypassedForTrust:(struct __SecTrust *)arg1;
+ (long long)certificateWarningCategoryForError:(id)arg1 trustIncludesRevokedCertificate:(_Bool)arg2 clockSkew:(double)arg3;
+ (long long)numberOfDaysBetweenCertificateValidityRangeAndNow:(id)arg1;
+ (id)permanentAcceptanceConfirmationTitle;
+ (id)permanentAcceptanceConfirmationDescription;
+ (id)permanentAcceptanceConfirmationButtonTitle;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWarningCategory:(long long)arg1 failingURL:(id)arg2 numberOfDaysInvalid:(long long)arg3 canGoBack:(_Bool)arg4 clockSkew:(double)arg5;

@end
