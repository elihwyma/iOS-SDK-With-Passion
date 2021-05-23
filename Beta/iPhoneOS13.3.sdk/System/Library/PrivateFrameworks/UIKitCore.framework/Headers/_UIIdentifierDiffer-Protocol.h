/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSIndexSet, NSSet;

@protocol _UIIdentifierDiffer <Swift>

@property (nonatomic, readonly) NSIndexSet *insertedIndexes;
@property (nonatomic, readonly) NSIndexSet *deletedIndexes;
@property (nonatomic, readonly) NSSet *movePairs;
@property (nonatomic, readonly) _Bool hasChanges;

@end
