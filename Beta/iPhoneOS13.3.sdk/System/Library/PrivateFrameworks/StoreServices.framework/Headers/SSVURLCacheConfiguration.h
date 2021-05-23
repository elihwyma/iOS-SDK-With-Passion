/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSVURLCacheConfiguration : NSObject

{
    _Bool _supportsProcessSharing;
    NSString *_sessionIdentifier;
}

@property (copy, nonatomic) NSString *sessionIdentifier;
@property (nonatomic) _Bool supportsProcessSharing;

@end
