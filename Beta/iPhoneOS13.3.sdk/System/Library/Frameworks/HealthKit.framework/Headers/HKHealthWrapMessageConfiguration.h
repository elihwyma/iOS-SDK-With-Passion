/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString, NSUUID;

@interface HKHealthWrapMessageConfiguration : NSObject

{
    _Bool _disableCompression;
    NSUUID *_subjectUUID;
    NSUUID *_studyUUID;
    NSString *_channel;
    NSString *_payloadType;
    struct __SecCertificate *_certificate;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_payloadIdentifier;
    NSData *_applicationData;
    NSDictionary *_keyValuePairs;
}

@property (copy, nonatomic, readonly) NSUUID *subjectUUID;
@property (copy, nonatomic, readonly) NSUUID *studyUUID;
@property (copy, nonatomic, readonly) NSString *channel;
@property (copy, nonatomic) NSString *payloadType;
@property (nonatomic, readonly) struct __SecCertificate *certificate;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *payloadIdentifier;
@property (copy, nonatomic) NSData *applicationData;
@property (copy, nonatomic) NSDictionary *keyValuePairs;
@property (nonatomic) _Bool disableCompression;

- (void)dealloc;
- (id)initWithChannel:(id)arg1 payloadType:(id)arg2 certificate:(struct __SecCertificate *)arg3;
- (id)initWithSubjectUUID:(id)arg1 studyUUID:(id)arg2 channel:(id)arg3 payloadType:(id)arg4 certificate:(struct __SecCertificate *)arg5;

@end
