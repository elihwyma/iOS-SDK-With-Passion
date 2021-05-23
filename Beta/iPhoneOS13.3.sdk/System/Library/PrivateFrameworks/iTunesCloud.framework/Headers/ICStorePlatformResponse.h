/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface ICStorePlatformResponse : NSObject

{
    NSNumber *_accountIdentifier;
    NSNumber *_enqueuerAccountIdentifier;
    NSDate *_expirationDate;
    NSArray *_requestedItemIdentifiers;
    NSDictionary *_responseDictionary;
    NSString *_storefrontIdentifier;
    _Bool _authenticated;
}

@property (nonatomic, readonly, getter=isAuthenticated) _Bool authenticated;
@property (copy, nonatomic, readonly) NSDictionary *resultsDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *allItems;
@property (copy, nonatomic, readonly) NSNumber *accountIdentifier;
@property (copy, nonatomic, readonly) NSNumber *enqueuerAccountIdentifier;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (copy, nonatomic, readonly) NSString *storefrontIdentifier;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithResponseDictionary:(id)arg1;
- (id)itemForIdentifier:(id)arg1;
- (id)initWithURLResponse:(id)arg1 requestedItemIdentifiers:(id)arg2;
- (id)initWithResponseDictionary:(id)arg1 requestedItemIdentifiers:(id)arg2;
- (void)_enumerateResultDictionariesUsingBlock:(CDUnknownBlockType)arg1;

@end
