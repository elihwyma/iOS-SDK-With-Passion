/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSArray, NSString;

@interface SSWishlistAddItemsRequest : SSRequest

{
    NSArray *_items;
    NSString *_caller;
    NSString *_version;
}

@property (copy, readonly) NSArray *items;
@property (copy, readonly) NSString *caller;
@property (copy, readonly) NSString *version;

- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)_convertedValueForValue:(id)arg1;
- (id)copyQueryStringParameters;
- (id)initWithItems:(id)arg1 caller:(id)arg2 version:(id)arg3;
- (void)startWithAddItemsResponseBlock:(CDUnknownBlockType)arg1;

@end
