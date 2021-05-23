/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString, NSURL;

@interface SSUpdatableAsset : NSObject

{
    NSURL *_cacheURL;
    NSString *_md5;
    NSString *_name;
    NSURL *_serverURL;
    NSString *_version;
}

@property (retain, nonatomic, setter=_setCacheURL:) NSURL *cacheURL;
@property (copy, nonatomic, setter=_setMD5:) NSString *md5;
@property (copy, nonatomic, setter=_setName:) NSString *name;
@property (retain, nonatomic, setter=_setServerURL:) NSURL *serverURL;
@property (copy, nonatomic, setter=_setVersion:) NSString *version;

@end
