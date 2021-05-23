/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSVMediaSocialPostExternalDestination : NSObject

{
    NSString *_accessToken;
    NSString *_pageAccessToken;
    NSString *_pageIdentifier;
    NSString *_serviceIdentifier;
}

@property (copy, nonatomic) NSString *pageAccessToken;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (copy, nonatomic) NSString *accessToken;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
