/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSDate, NSDictionary, NSURL;

@interface HMCameraClipAssetContext : NSObject <Swift>

{
    NSURL *_url;
    NSDate *_expirationDate;
    NSDictionary *_requiredHTTPHeaders;
}

@property (readonly) NSURL *url;
@property (readonly) NSDate *expirationDate;
@property (copy, readonly) NSDictionary *requiredHTTPHeaders;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 expirationDate:(id)arg2 requiredHTTPHeaders:(id)arg3;

@end
