/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface SSVRedeemCodeItem : NSObject

{
    NSMutableDictionary *_dictionary;
}

@property (nonatomic, readonly) NSDictionary *redeemCodeDictionary;
@property (nonatomic, readonly) long long itemIdentifier;

- (id)initWithRedeemCodeDictionary:(id)arg1;
- (id)initWithLookupItem:(id)arg1;

@end
