/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, PLManagedObjectContext;

@protocol PLPTPConversionSupport;

@interface PLPTPdAssetEnumerator : NSObject

{
    PLManagedObjectContext *_managedObjectContext;
    NSArray *_assetObjectIDs;
    id <PLPTPConversionSupport> _conversionSupport;
}

+ (id)enumeratorWithAssetObjectIDs:(id)arg1 managedObjectContext:(id)arg2 conversionSupport:(id)arg3;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithAssetObjectIDs:(id)arg1 managedObjectContext:(id)arg2 conversionSupport:(id)arg3;
- (void)enumerateDictionariesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAssetsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)getPTPdInfo:(id *)arg1 count:(unsigned long long)arg2 fetchOffset:(unsigned long long)arg3;
- (void)enumerateDictionariesWithCount:(unsigned long long)arg1 fetchOffset:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)enumerateAssetsWithCount:(unsigned long long)arg1 fetchOffset:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)assetsFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2;

@end
