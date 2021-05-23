/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMFDigest, NSURL;

@interface HMSoftwareUpdateDocumentationMetadata : NSObject <Swift>

{
    NSURL *_URL;
    HMFDigest *_digest;
}

@property (copy, readonly) NSURL *URL;
@property (copy, readonly) HMFDigest *digest;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 digest:(id)arg2;

@end
