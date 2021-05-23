/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface SSPlistCacheObject : NSObject

{
    NSDictionary *_plist;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cacheObjectTypeIdentifier;

- (void)dealloc;
- (void)setPlist:(id)arg1;
- (id)plist;
- (id)cacheObjectDataRepresentation;
- (id)cacheObjectTypeIdentifier;
- (id)initWithCacheObjectDataRepresentation:(id)arg1;

@end
