/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSKeyedUnarchiver.h>

@interface NSKeyedUnarchiver (PLKeyedUnarchiverAdditions)

+ (id)pl_safeUnarchiveObjectFromData:(id)arg1 classes:(id)arg2;
+ (id)pl_safeUnarchiveObjectFromData:(id)arg1 class:(Class)arg2;
+ (id)pl_safeUnarchiveObjectFromFile:(id)arg1 class:(Class)arg2;
+ (id)pl_safeUnarchiveObjectFromFile:(id)arg1 classes:(id)arg2;

- (id)pl_safeInitForReadingFromData:(id)arg1;

@end
