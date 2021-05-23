/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSURLCredential, NSURLProtectionSpace;

@interface WBSProtectionSpaceMatch : NSObject

{
    NSURLProtectionSpace *_protectionSpace;
    NSDictionary *_credentials;
    NSURLCredential *_defaultCredential;
    long long _matchLevel;
}

@property (nonatomic, readonly) NSURLProtectionSpace *protectionSpace;
@property (copy, nonatomic, readonly) NSDictionary *credentials;
@property (nonatomic, readonly) NSURLCredential *defaultCredential;
@property (nonatomic, readonly) long long matchLevel;

- (id)initWithProtectionSpace:(id)arg1 credentials:(id)arg2 defaultCredential:(id)arg3 matchLevel:(long long)arg4;

@end
