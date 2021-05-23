/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLEngineStore;

@interface CPLSimpleMergeHelper : NSObject

{
    CPLEngineStore *_store;
}

@property (nonatomic, readonly) CPLEngineStore *store;

+ (id)_mergerWithNoConflictsForStore:(id)arg1;
+ (id)_mergerWithConflictsForStore:(id)arg1 conflictingScopeIdentifiers:(id)arg2;

- (id)initWithEngineStore:(id)arg1;
- (_Bool)_changeCanConflict:(id)arg1;
- (id)mergerForBatch:(id)arg1 error:(id *)arg2;

@end
