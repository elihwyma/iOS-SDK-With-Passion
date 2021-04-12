//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSUUID;

@interface CRKIdentityMarkedCertificate : NSObject <NSSecureCoding>
{
    NSUUID *_keyPairMarker;
    NSData *_certificateData;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property(readonly, nonatomic) NSUUID *keyPairMarker; // @synthesize keyPairMarker=_keyPairMarker;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPairMarker:(id)arg1 certificateData:(id)arg2;

@end

