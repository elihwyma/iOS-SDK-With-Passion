/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <NanoRegistry/NRPBTermsEvent.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NSString;

@interface NRTermsEvent : NRPBTermsEvent <Swift>

{
    _Bool _writable;
    NSString *_termsDigest;
}

@property (retain, nonatomic) NSString *termsDigest;
@property (nonatomic) _Bool writable;

+ (_Bool)supportsSecureCoding;
+ (id)pathToTermsCache;
+ (id)stringForEventType:(unsigned long long)arg1;
+ (id)digestFromData:(id)arg1;
+ (_Bool)shouldAllowArchivingOfTermsTextToFile;
+ (id)pathToTermsWithDigest:(id)arg1;
+ (id)loadTermsWithPath:(id)arg1;
+ (id)eventWithProtobuf:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setEventDate:(double)arg1;
- (void)setEventType:(int)arg1;
- (id)initWithDeviceID:(id)arg1;
- (void)setPresentationReason:(id)arg1;
- (void)setDocumentationID:(id)arg1;
- (id)termsText;
- (void)saveTerms;
- (void)setTermsText:(id)arg1;
- (void)setPresentationLocation:(int)arg1;
- (void)setAcknowledgedDeviceName:(id)arg1;
- (void)setAcknowledgedDeviceSerialNumber:(id)arg1;
- (void)setDisplayDeviceName:(id)arg1;
- (void)setDisplayDeviceSerialNumber:(id)arg1;
- (void)setLoggingProcessName:(id)arg1;
- (void)_setEventType:(unsigned long long)arg1;
- (void)updateEventDate;
- (void)_setLoggingProcessName:(id)arg1;

@end
