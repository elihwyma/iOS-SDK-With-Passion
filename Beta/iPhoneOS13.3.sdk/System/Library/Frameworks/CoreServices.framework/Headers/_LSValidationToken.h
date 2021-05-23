/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _LSValidationToken : NSObject

{
    NSData *_payload;
    NSData *_nonce;
    NSData *_HMAC;
    id _owner;
}

@property (weak, nonatomic) id owner;

+ (_Bool)supportsSecureCoding;
+ (id)HMACWithPayload:(id)arg1 nonce:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (_Bool)isCorrectForPayload:(id)arg1;

@end
