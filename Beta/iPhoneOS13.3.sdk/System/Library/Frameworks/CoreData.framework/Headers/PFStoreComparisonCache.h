/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PFStoreComparisonCache : NSObject

{
    NSMutableDictionary *_identifierToStoreUUIDToObjectID;
    NSMutableDictionary *_storeUUIDToIdentifiers;
}

- (id)init;
- (void)dealloc;
- (id)objectIDForIdentifier:(id)arg1 inStore:(id)arg2;
- (void)setObjectID:(id)arg1 forIdentifier:(id)arg2;
- (id)identifiersForStore:(id)arg1;

@end
