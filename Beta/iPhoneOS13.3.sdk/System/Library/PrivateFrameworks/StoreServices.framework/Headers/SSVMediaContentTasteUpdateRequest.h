/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSArray, NSString;

@interface SSVMediaContentTasteUpdateRequest : SSRequest

{
    _Bool _shouldInvalidateLocalCache;
    NSArray *_contentTasteItemUpdates;
}

@property (copy, nonatomic) NSArray *contentTasteItemUpdates;
@property (nonatomic) _Bool shouldInvalidateLocalCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;

@end
