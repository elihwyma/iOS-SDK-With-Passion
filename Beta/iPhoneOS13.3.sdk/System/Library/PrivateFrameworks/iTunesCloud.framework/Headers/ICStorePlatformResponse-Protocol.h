/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/Swift-Protocol.h>

@class NSArray, NSDate, NSNumber, NSString;

@protocol ICStorePlatformResponse <Swift>

@property (copy, nonatomic, readonly) NSArray *allItems;
@property (copy, nonatomic, readonly) NSNumber *accountIdentifier;
@property (copy, nonatomic, readonly) NSNumber *enqueuerAccountIdentifier;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (copy, nonatomic, readonly) NSString *storefrontIdentifier;

- (unsigned short)enumerateItemsUsingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)itemForIdentifier: /* Error: Ran out of types for this method. */;

@end
