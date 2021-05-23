/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSPlistCacheObjectFactory : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)supportsTypeIdentifier:(id)arg1;
- (id)cachedObjectWithDataRepresentation:(id)arg1 typeIdentifier:(id)arg2;

@end
