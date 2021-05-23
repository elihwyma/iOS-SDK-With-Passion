/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSIndexSet;

@interface PXVisualPositionsChangeDetails : NSObject

{
    long long _countBeforeChanges;
    long long _anchorIndexBeforeChanges;
    NSIndexSet *_headerIndexesBeforeChanges;
    long long _countAfterChanges;
    long long _anchorIndexAfterChanges;
    NSIndexSet *_headerIndexesAfterChanges;
    long long _anchorBodyIndexBeforeChanges;
    long long _anchorBodyIndexAfterChanges;
}

@property (nonatomic, readonly) long long anchorBodyIndexBeforeChanges;
@property (nonatomic, readonly) long long anchorBodyIndexAfterChanges;
@property (nonatomic, readonly) long long countBeforeChanges;
@property (nonatomic, readonly) long long anchorIndexBeforeChanges;
@property (nonatomic, readonly) NSIndexSet *headerIndexesBeforeChanges;
@property (nonatomic, readonly) long long countAfterChanges;
@property (nonatomic, readonly) long long anchorIndexAfterChanges;
@property (nonatomic, readonly) NSIndexSet *headerIndexesAfterChanges;

+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 countAfterChanges:(long long)arg3 anchorIndexAfterChanges:(long long)arg4 anchorFan:(long long)arg5 anchorReload:(long long)arg6;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 countAfterChanges:(long long)arg3 anchorIndexAfterChanges:(long long)arg4 anchorFan:(long long)arg5;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6 anchorFan:(long long)arg7 anchorReload:(long long)arg8;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorInserted:(long long)arg2 indexBeforeChanges:(long long)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorInserted:(long long)arg2 indexBeforeChanges:(long long)arg3 headerIndexesBeforeChanges:(id)arg4 countAfterChanges:(long long)arg5 anchorIndexAfterChanges:(long long)arg6 headerIndexesAfterChanges:(id)arg7;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 countAfterChanges:(long long)arg3 anchorRemoved:(long long)arg4 indexAfterChanges:(long long)arg5;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorRemoved:(long long)arg5 indexAfterChanges:(long long)arg6 headerIndexesAfterChanges:(id)arg7;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6 reloadAllIncludingAnchor:(_Bool)arg7;

- (id)init;
- (id)initWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6;
- (CDStruct_b8f58034)visualPositionAfterApplyingChangesToIndex:(long long)arg1;
- (CDStruct_b8f58034)visualPositionAfterRevertingChangesFromIndex:(long long)arg1;
- (CDStruct_b8f58034)bodyVisualPositionAfterApplyingChangesToBodyIndex:(long long)arg1;
- (CDStruct_b8f58034)bodyVisualPositionAfterRevertingChangesFromBodyIndex:(long long)arg1;
- (id)arrayChangeDetailsWithItemsChanged:(_Bool)arg1;

@end
