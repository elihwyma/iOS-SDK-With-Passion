/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface ICStorePlatformResponseGroup : NSObject

{
    NSArray *_childResponses;
}

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
- (id)itemForIdentifier:(id)arg1;
- (id)initWithResponses:(id)arg1;

@end
