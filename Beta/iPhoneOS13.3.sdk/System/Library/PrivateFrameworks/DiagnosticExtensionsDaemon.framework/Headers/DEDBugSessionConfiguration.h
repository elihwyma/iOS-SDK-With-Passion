/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class DEDNotifierConfiguration, NSDictionary, NSNumber, NSSet, NSString;

@interface DEDBugSessionConfiguration : NSObject

{
    NSSet *_requestedCapabilities;
    _Bool _allowsCellularUpload;
    _Bool _cloudkitUseDevelopmentEnvironment;
    long long _finishingMove;
    long long _notifyingMove;
    NSString *_seedingDeviceToken;
    long long _seedingSubmissionID;
    long long _seedingSubmissionType;
    long long _seedingEnvironment;
    NSString *_seedingHost;
    NSNumber *_radarProblemID;
    NSString *_radarAuthToken;
    NSString *_cloudkitContainer;
    NSDictionary *_cloudkitData;
    DEDNotifierConfiguration *_notifierConfiguration;
}

@property (readonly) NSString *requestedCapabilitiesString;
@property long long finishingMove;
@property long long notifyingMove;
@property _Bool allowsCellularUpload;
@property (retain) NSString *seedingDeviceToken;
@property long long seedingSubmissionID;
@property long long seedingSubmissionType;
@property long long seedingEnvironment;
@property (retain) NSString *seedingHost;
@property (retain) NSNumber *radarProblemID;
@property (retain) NSString *radarAuthToken;
@property (retain) NSString *cloudkitContainer;
@property _Bool cloudkitUseDevelopmentEnvironment;
@property (retain) NSDictionary *cloudkitData;
@property (retain) DEDNotifierConfiguration *notifierConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)archivedClasses;
+ (id)secureUnarchiveWithData:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToConfiguration:(id)arg1;
- (id)requestedCapabilities;
- (id)secureArchive;
- (void)requestCapabilitiesSet:(id)arg1;
- (void)requestCapabilities:(id)arg1;

@end
