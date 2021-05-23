/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString, SSXPCConnection;

@interface SSVMediaSocialShareExtension : NSObject

{
    SSXPCConnection *_connection;
}

@property (copy, nonatomic, readonly) NSString *extensionIdentifier;

- (id)init;
- (void)getVisibilityWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
