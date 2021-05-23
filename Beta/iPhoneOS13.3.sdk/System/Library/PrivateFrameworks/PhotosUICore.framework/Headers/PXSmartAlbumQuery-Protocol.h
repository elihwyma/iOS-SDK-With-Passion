/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSString, PXLabeledValue;

@protocol PXSmartAlbumQueryDelegate;

@protocol PXSmartAlbumQuery <Swift>

@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) NSArray *conjunctionValues;
@property (retain, nonatomic) PXLabeledValue *conjunctionValue;
@property (retain, nonatomic) NSArray *conditions;
@property (nonatomic, readonly) _Bool canPersistChanges;
@property (nonatomic, readonly) NSString *statusString;
@property (weak, nonatomic) id <PXSmartAlbumQueryDelegate> delegate;

- (unsigned short)addNewConditionAfterCondition: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceCondition:withConditionOfType: /* Error: Ran out of types for this method. */;
- (unsigned short)removeCondition: /* Error: Ran out of types for this method. */;
- (unsigned short)persistChangesWithCompletion: /* Error: Ran out of types for this method. */;

@end
