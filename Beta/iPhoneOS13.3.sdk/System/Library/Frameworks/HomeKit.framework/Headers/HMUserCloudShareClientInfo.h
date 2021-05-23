/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSData;

@interface HMUserCloudShareClientInfo : NSObject <Swift>

{
    NSData *_accountAuthToken;
}

@property (nonatomic, readonly) NSData *accountAuthToken;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountAuthToken:(id)arg1;

@end
