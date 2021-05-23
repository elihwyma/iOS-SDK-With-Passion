/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSPurchasableItem.h>

@interface SSPurchasableAppItem : SSPurchasableItem

+ (id)databaseTable;
+ (id)allPropertyKeys;
+ (id)itemsFromDatabase:(id)arg1 forAccount:(long long)arg2 matching:(id)arg3 sortedBy:(id)arg4 sortAscending:(_Bool)arg5;
+ (id)allItemsFromDatabase:(id)arg1 forAccount:(long long)arg2 sortedBy:(id)arg3 sortAscending:(_Bool)arg4;
+ (id)sortByNameKey;

- (id)description;
- (id)category;
- (id)bundleID;
- (id)accountIdentifier;
- (id)companyName;
- (id)iconURL;
- (_Bool)isPreorder;
- (_Bool)hasMessagesExtension;
- (_Bool)is32BitOnly;
- (long long)contentRatingFlags;
- (id)iconTitle;
- (_Bool)isFamilyShareable;
- (_Bool)isHiddenFromSpringBoard;
- (_Bool)isNewsstand;
- (id)longTitle;
- (unsigned int)minimumOS;
- (id)ovalIconURLString;
- (_Bool)supportsIPad;
- (_Bool)supportsIPhone;
- (id)redownloadParams;
- (id)humanReadableVersion;
- (long long)iTunesVersion;
- (id)requiredCapabilitiesString;

@end
