/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface SKCloudServiceSetupReloadContext : NSObject

{
    NSDictionary *_userInfo;
    NSURL *_cloudServiceSetupURL;
    NSString *_action;
    NSArray *_queryItems;
    NSString *_sourceApplicationBundleIdentifier;
    NSURL *_referrerURL;
    NSString *_serializedUserInfo;
}

@property (copy, nonatomic, readonly) NSString *serializedUserInfo;
@property (retain, nonatomic) NSURL *cloudServiceSetupURL;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSArray *queryItems;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSURL *referrerURL;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
