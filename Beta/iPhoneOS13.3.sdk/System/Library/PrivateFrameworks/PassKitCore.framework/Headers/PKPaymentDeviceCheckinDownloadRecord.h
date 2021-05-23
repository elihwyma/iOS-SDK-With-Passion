/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentBackgroundDownloadRecord.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSString, NSUUID;

@interface PKPaymentDeviceCheckinDownloadRecord : PKPaymentBackgroundDownloadRecord <Swift>

{
    NSString *_region;
    NSUUID *_identifier;
    NSData *_responseData;
}

@property (retain, nonatomic) NSString *region;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSData *responseData;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
