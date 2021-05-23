/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXCallSource.h>

@class CXInProcessProvider, NSString, NSURL;

@interface CXInProcessCallSource : CXCallSource

{
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    CXInProcessProvider *_provider;
}

@property (retain, nonatomic) CXInProcessProvider *provider;

- (id)identifier;
- (int)processIdentifier;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)vendorProtocolDelegate;
- (_Bool)isPermittedToUsePublicAPI;
- (_Bool)isPermittedToUsePrivateAPI;

@end
