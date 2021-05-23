/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSData, NSDate;

@interface CKPublicKey : NSObject

{
    NSData *_publicKey;
    long long _version;
    NSDate *_expiration;
    NSData *_certData;
}

@property (nonatomic, readonly) NSData *publicKey;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) NSDate *expiration;
@property (nonatomic, readonly) NSData *certData;

- (id)initWithPublicKey:(id)arg1 version:(long long)arg2 expiration:(id)arg3 certificateData:(id)arg4;
- (_Bool)hasExpired;

@end
