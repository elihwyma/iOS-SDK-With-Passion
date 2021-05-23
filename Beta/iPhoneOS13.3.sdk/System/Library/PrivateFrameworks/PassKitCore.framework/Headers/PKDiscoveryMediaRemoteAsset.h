/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString, NSURL;

@interface PKDiscoveryMediaRemoteAsset : NSObject <Swift>

{
    NSString *_sha1Hex;
    NSURL *_url;
}

@property (nonatomic, readonly) NSString *sha1Hex;
@property (nonatomic, readonly) NSURL *url;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
