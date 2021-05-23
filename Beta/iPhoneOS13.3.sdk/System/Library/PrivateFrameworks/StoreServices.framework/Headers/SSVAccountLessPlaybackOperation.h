/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSVComplexOperation.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface SSVAccountLessPlaybackOperation : SSVComplexOperation

{
    NSString *_assetStoreFrontIdentifier;
    NSMutableDictionary *_httpHeaderFields;
    NSString *_itemIdentifier;
    CDUnknownBlockType _responseBlock;
}

@property (copy, nonatomic) NSDictionary *HTTPHeaderFields;
@property (copy, nonatomic) NSString *assetStoreFrontIdentifier;
@property (copy) NSString *itemIdentifier;
@property (copy) CDUnknownBlockType responseBlock;

- (void)main;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)valueForHTTPHeaderField:(id)arg1;
- (id)_requestBodyData;

@end
