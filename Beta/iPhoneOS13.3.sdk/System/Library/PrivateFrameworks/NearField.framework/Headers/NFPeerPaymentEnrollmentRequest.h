/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface NFPeerPaymentEnrollmentRequest : NSObject

{
    NSData *_alternateDSID;
}

@property (copy, nonatomic) NSData *alternateDSID;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
