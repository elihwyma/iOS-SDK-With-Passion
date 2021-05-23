/*
 Image: /System/Library/PrivateFrameworks/SEService.framework/SEService
 */

#import <NSObject.h>

@class NSData;

@interface SEEndPointSignatureResponse : NSObject

{
    NSData *_signedData;
    NSData *_signature;
}

@property (retain, nonatomic) NSData *signedData;
@property (retain, nonatomic) NSData *signature;

+ (_Bool)supportsSecureCoding;
+ (id)responseWithSignedData:(id)arg1 signature:(id)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
