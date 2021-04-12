//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, NSUUID;

@interface PKPeerPaymentRequestToken : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_requestToken;
    NSUUID *_deviceScoreIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)informalRequestToken;
@property(readonly, copy, nonatomic) NSUUID *deviceScoreIdentifier; // @synthesize deviceScoreIdentifier=_deviceScoreIdentifier;
@property(readonly, copy, nonatomic) NSString *requestToken; // @synthesize requestToken=_requestToken;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isInformalRequestToken;
- (BOOL)isEqualToPeerPaymentRequestToken:(id)arg1;
- (id)initWithRequestToken:(id)arg1 deviceScoreIdentifier:(id)arg2;

@end

