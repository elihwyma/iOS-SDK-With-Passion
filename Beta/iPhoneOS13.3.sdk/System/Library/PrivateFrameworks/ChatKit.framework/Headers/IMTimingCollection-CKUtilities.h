/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <IMCore/IMTimingCollection.h>

@interface IMTimingCollection (CKUtilities)

+ (id)globalTimingCollectionForKey:(id)arg1;
+ (void)logTimingCollectionForKey:(id)arg1;
+ (void)invalidateGlobalTimingCollectionForKey:(id)arg1;
+ (id)activeGlobalTimingCollections;
+ (void)invalidateGlobalTimingCollections;

@end
