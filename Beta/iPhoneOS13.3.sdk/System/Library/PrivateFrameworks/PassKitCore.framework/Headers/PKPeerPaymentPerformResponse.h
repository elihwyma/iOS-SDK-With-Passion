/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentStatusResponse.h>

@class NSUUID;

@interface PKPeerPaymentPerformResponse : PKPeerPaymentStatusResponse

{
    NSUUID *_deviceScoreIdentifier;
}

@property (copy, nonatomic, readonly) NSUUID *deviceScoreIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 deviceScoreIdentifier:(id)arg2;

@end
