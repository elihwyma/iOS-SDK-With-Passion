/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface SKUIURL : NSObject <Swift>

{
    NSMutableDictionary *_queryDictionary;
    NSString *_referrerApplicationName;
    NSString *_referrerURLString;
    NSURL *_url;
}

@property (nonatomic, readonly) NSURL *underlyingURL;
@property (nonatomic, readonly) NSString *actionString;
@property (copy, nonatomic, readonly) NSDictionary *queryStringDictionary;
@property (nonatomic, readonly) NSString *redeemCode;
@property (nonatomic, readonly) NSString *searchTerm;
@property (nonatomic, readonly) NSString *URLBagKey;
@property (copy, nonatomic) NSString *referrerApplicationName;
@property (copy, nonatomic) NSString *referrerURLString;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (id)_queryDictionary;
- (id)newURLRequest;
- (id)valueForQueryParameter:(id)arg1;
- (id)newURLRequestWithBaseURL:(id)arg1;
- (id)initWithURLBagKey:(id)arg1;
- (id)_decodedQueryParameter:(id)arg1;
- (id)_searchGroupForSearchKind:(id)arg1;
- (id)_searchURLBagKey;
- (id)_appStoreSearchURLBagKey;
- (id)initWithURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;

@end
