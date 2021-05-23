/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSSet.h>

@class NSString;

@interface NSSet (HKUUID)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hk_typesForSetOf:(Class)arg1;
+ (id)hk_typesForArrayOf:(Class)arg1;
+ (id)hk_setByUnioningSet:(id)arg1 otherSet:(id)arg2;
+ (id)hk_typesForDictionaryMapping:(Class)arg1 to:(Class)arg2;

- (id)hk_filter:(CDUnknownBlockType)arg1;
- (id)hk_map:(CDUnknownBlockType)arg1;
- (_Bool)hk_enumerateUUIDsWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (id)hk_dataForAllUUIDs;
- (id)hk_firstSortedObjectWithComparison:(CDUnknownBlockType)arg1;
- (id)hk_mapToDictionary:(CDUnknownBlockType)arg1;
- (id)hk_minus:(id)arg1;
- (id)hk_intersection:(id)arg1;

@end
