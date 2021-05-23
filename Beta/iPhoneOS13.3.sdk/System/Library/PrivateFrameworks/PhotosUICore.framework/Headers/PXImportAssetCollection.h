/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface PXImportAssetCollection : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_assetQueue;
    NSMutableArray *_assetList;
    NSArray *_arrangedAssetList;
    NSMutableSet *_assetUUIDs;
    _Bool _needsSorting;
    _Bool _alreadyImportedGroup;
    NSString *_identifier;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool alreadyImportedGroup;

+ (id)dayFormatter;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (id)localizedTitle;
- (long long)numberOfItems;
- (id)itemAtIndex:(unsigned long long)arg1;
- (long long)indexOfItem:(id)arg1;
- (id)arrangedObjects;
- (void)arrangedObjects:(CDUnknownBlockType)arg1;
- (id)unsortedObjects;

@end
