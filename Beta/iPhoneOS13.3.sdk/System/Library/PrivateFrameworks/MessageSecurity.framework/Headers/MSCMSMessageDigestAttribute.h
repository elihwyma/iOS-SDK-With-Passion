/*
 Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MSCMSMessageDigestAttribute : NSObject

{
    NSData *_messageDigest;
}

@property (retain) NSData *messageDigest;

+ (id)messageDigestAttributeWithDigest:(id)arg1;

- (id)encodeAttributeWithError:(id *)arg1;
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;
- (id)initWithDigest:(id)arg1;

@end
