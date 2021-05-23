/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSSet;

@interface PXFeedSectionInfosChange : NSObject

{
    _Bool _shouldReload;
    NSIndexSet *_deletedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_updatedIndexes;
    NSSet *_sectionInfosWithCommentChanges;
    NSSet *_updatedAssets;
}

@property (nonatomic) _Bool shouldReload;
@property (retain, nonatomic) NSIndexSet *deletedIndexes;
@property (retain, nonatomic) NSIndexSet *insertedIndexes;
@property (retain, nonatomic) NSIndexSet *updatedIndexes;
@property (retain, nonatomic) NSSet *sectionInfosWithCommentChanges;
@property (retain, nonatomic) NSSet *updatedAssets;

@end
