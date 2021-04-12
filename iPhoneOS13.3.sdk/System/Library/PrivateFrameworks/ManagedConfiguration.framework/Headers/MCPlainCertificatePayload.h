//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSData, NSString;

@interface MCPlainCertificatePayload : MCCertificatePayload
{
    NSString *_certificateFileName;
    NSData *_certificateData;
    NSString *_password;
    int _dataEncoding;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, retain, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property(readonly, nonatomic) int dataEncoding; // @synthesize dataEncoding=_dataEncoding;
@property(readonly, retain, nonatomic) NSString *certificateFileName; // @synthesize certificateFileName=_certificateFileName;
// - (void).cxx_destruct;
- (BOOL)isIdentity;
- (id)persistentResourceID;
- (id)description;
- (struct __SecCertificate )copyCertificate;
- (id)installationWarnings;
- (BOOL)isSigned;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id )arg3;

@end

