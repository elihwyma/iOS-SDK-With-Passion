/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@interface _CDSpotlightItemUtils : NSObject

+ (id)querySpotlightItemsWithStartDate:(id)arg1 endDate:(id)arg2 getMail:(_Bool)arg3 getMessages:(_Bool)arg4;
+ (id)interactionForSearchableItem:(id)arg1;
+ (_Bool)whitelistedCSSearchableItem:(id)arg1;
+ (long long)getInteractionMechanismForContentUTI:(id)arg1 typeTree:(id)arg2;
+ (id)policies;
+ (id)interactionUUIDForSearchableItemWithUID:(id)arg1 bundleID:(id)arg2;
+ (id)_contactsForPersons:(id)arg1;
+ (id)_contactsForEmailAddresses:(id)arg1 names:(id)arg2;
+ (_Bool)shouldFilterEmailAddress:(id)arg1;
+ (id)_metadataForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (_Bool)isLocationBasedItem:(id)arg1;
+ (id)_locationMetadataForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (id)knowledgeEventsForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (id)contextDictionaryForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (id)emailContextDictionaryForSearchableItem:(id)arg1;
+ (id)messageContextDictionaryForSearchableItem:(id)arg1;
+ (id)collectionEventForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (id)mechanismUtiMap;
+ (id)safariUTIs;
+ (_Bool)utType:(id)arg1 conformsTo:(id)arg2;
+ (_Bool)contentTypeTree:(id)arg1 conformsToUTIType:(id)arg2;
+ (id)utiConformCache;
+ (_Bool)uncachedUtType:(id)arg1 conformsTo:(id)arg2;
+ (id)expectedUTIsForMechanism:(long long)arg1;
+ (_Bool)contentTypeTree:(id)arg1 conformsToUTITypes:(id)arg2;
+ (id)expectedSupportedUTIs;

@end
