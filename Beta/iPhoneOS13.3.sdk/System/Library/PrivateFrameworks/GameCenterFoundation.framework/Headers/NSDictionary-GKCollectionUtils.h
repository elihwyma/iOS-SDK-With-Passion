/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (GKCollectionUtils)

+ (id)_gkDictionaryWithFormEncodedString:(id)arg1;
+ (id)_gkImageCacheKeyPathsByKey;
+ (id)_gkClientImageDictionaryForServerImageURLs:(id)arg1;

- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)_gkImageURLForSize:(long long)arg1 scale:(double)arg2;
- (id)_gkDictionaryByRemovingObjectsForKeys:(id)arg1;
- (id)_gkDictionaryByRemovingObjectForKey:(id)arg1;
- (id)_gkSubDictionaryWithKeys:(id)arg1;
- (id)_gkSubDictionaryWithKeys:(id)arg1 mappedToNewKeys:(id)arg2;
- (id)_gkValuesForKeys:(id)arg1;
- (id)_gkImageURLForSize:(long long)arg1 scale:(double)arg2 foundSize:(out unsigned long long *)arg3;

@end
