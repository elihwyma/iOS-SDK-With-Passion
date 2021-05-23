/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, PLSingleQuery, PXLabeledValue;

@protocol PXSmartAlbumConditionDelegate, PXSmartAlbumEditingContext;

@interface PXSmartAlbumCondition : NSObject

{
    NSArray *_comparatorValues;
    long long _conditionType;
    id <PXSmartAlbumEditingContext> _editingContext;
    PLSingleQuery *_singleQuery;
    id <PXSmartAlbumConditionDelegate> _delegate;
}

@property (nonatomic, readonly) long long conditionType;
@property (nonatomic, readonly) id <PXSmartAlbumEditingContext> editingContext;
@property (nonatomic, readonly) PLSingleQuery *singleQuery;
@property (weak, nonatomic) id <PXSmartAlbumConditionDelegate> delegate;
@property (nonatomic, readonly) NSArray *comparatorValues;
@property (retain, nonatomic) PXLabeledValue *comparatorValue;
@property (nonatomic, readonly) long long comparatorParameterType;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;
+ (id)conditionWithConditionType:(long long)arg1 editingContext:(id)arg2;
+ (id)_conditionWithSingleQuery:(id)arg1 editingContext:(id)arg2;
+ (id)conditionsForQuery:(id)arg1 editingContext:(id)arg2 error:(id *)arg3;

- (id)init;
- (int)_comparatorType;
- (long long)comparatorMode;
- (id)_initWithConditionType:(long long)arg1 singleQuery:(id)arg2 editingContext:(id)arg3;

@end
