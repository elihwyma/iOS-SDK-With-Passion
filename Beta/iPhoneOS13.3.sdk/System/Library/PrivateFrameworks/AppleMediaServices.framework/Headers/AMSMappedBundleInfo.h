/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSMappedBundleInfo : NSObject

{
    NSString *_bundleIdentifier;
    NSString *_clientName;
    NSString *_clientVersion;
    NSString *_scheme;
    NSString *_secureScheme;
    NSString *_accountMediaType;
}

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSString *clientVersion;
@property (retain, nonatomic) NSString *scheme;
@property (retain, nonatomic) NSString *secureScheme;
@property (retain, nonatomic) NSString *accountMediaType;

+ (id)bundleInfoForProcessInfo:(id)arg1;
+ (id)currentBundleInfo;
+ (id)accountMediaTypeInfoForProcessInfo:(id)arg1;
+ (id)_clientNameFromProcessInfo:(id)arg1;
+ (id)_clientVersionFromProcessInfo:(id)arg1 clientName:(id)arg2;
+ (id)_accountMediaTypeForClientName:(id)arg1 bundleID:(id)arg2;

- (id)_initWithClient:(long long)arg1 processInfo:(id)arg2;

@end
