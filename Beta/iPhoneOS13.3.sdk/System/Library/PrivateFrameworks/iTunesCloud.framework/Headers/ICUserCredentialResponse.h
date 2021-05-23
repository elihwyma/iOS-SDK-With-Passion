/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICUserIdentityProperties;

@interface ICUserCredentialResponse : NSObject

{
    ICUserIdentityProperties *_identityProperties;
    ICUserIdentityProperties *_iCloudIdentityProperties;
}

@property (copy, nonatomic) ICUserIdentityProperties *identityProperties;
@property (copy, nonatomic) ICUserIdentityProperties *iCloudIdentityProperties;

@end
