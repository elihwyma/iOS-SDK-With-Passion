/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSURL.h>

@interface NSURL (SSExtensions)

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)_ss_URLByRemovingQueryParameter:(id)arg1;
- (_Bool)_ss_hasQueryParameter:(id)arg1;
- (id)_ss_valueForQueryParameter:(id)arg1;
- (_Bool)isStoreServicesURL;

@end
