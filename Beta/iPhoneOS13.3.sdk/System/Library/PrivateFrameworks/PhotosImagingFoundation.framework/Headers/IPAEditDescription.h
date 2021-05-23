/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface IPAEditDescription : NSObject

{
    NSArray *_operations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)expectedOperationClass;
+ (id)presetifyAdjustmentStack:(id)arg1;
+ (unsigned long long)insertIndexForOperationWithIdentifier:(id)arg1 inArray:(id)arg2 withOrdering:(id)arg3;
+ (id)sortOperations:(id)arg1 withOrdering:(id)arg2;
+ (_Bool)containsValidOperations:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)_init;
- (id)operations;
- (unsigned long long)operationCount;
- (id)_operations;
- (_Bool)isEqualToDescription:(id)arg1;
- (id)initWithOperations:(id)arg1;
- (id)archivalRepresentation;
- (unsigned long long)sortOrderForOperationWithIdentifier:(id)arg1;
- (id)descriptionWithOperations:(id)arg1;
- (id)descriptionByAddingOperation:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)descriptionByAddingOperation:(id)arg1;
- (id)descriptionByReplacingOperation:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_debugDescriptionSuffix;
- (_Bool)isEqualToDescriptionRenderOperations:(id)arg1;
- (unsigned long long)firstIndexOfOperationWithIdentifier:(id)arg1;
- (unsigned long long)indexOfOperationWithUUID:(id)arg1;
- (unsigned long long)insertIndexForOperationWithIdentifier:(id)arg1;
- (id)firstOperationWithIdentifier:(id)arg1;
- (id)operationAtIndex:(unsigned long long)arg1;
- (id)operationWithUUID:(id)arg1;
- (_Bool)containsOperationWithIdentifier:(id)arg1;
- (void)forEachImmutableOperation:(CDUnknownBlockType)arg1;
- (void)withImmutableOperationAtIndex:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)descriptionByRemovingOperationAtIndex:(unsigned long long)arg1;
- (id)descriptionByRemovingOperation:(id)arg1;
- (id)descriptionByRemovingOperationsStartingAtIndex:(unsigned long long)arg1;
- (id)descriptionWithOperationsUpToUUID:(id)arg1;
- (id)_operationAtIndex:(unsigned long long)arg1;

@end
