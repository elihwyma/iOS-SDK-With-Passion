/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSString, NSURL;

@interface HFAppPunchoutRequest : NSObject <Swift>

{
    NSString *_name;
    NSString *_bundleID;
    NSURL *_payloadURL;
    NSURL *_storeURL;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSURL *payloadURL;
@property (nonatomic, readonly) NSURL *storeURL;

+ (_Bool)supportsSecureCoding;
+ (id)handleRequest:(id)arg1;
+ (id)_openApplicationService;
+ (_Bool)canHandleBundleID:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 bundleID:(id)arg2 payloadURL:(id)arg3 storeURL:(id)arg4;

@end
