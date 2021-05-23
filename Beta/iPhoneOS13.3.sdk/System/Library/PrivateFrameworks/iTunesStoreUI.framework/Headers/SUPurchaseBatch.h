/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray, SUPurchaseManager;

@interface SUPurchaseBatch : NSObject

{
    NSArray *_continuations;
    NSArray *_errors;
    NSArray *_items;
    NSArray *_offers;
    SUPurchaseManager *_purchaseManager;
    _Bool _shouldSuspendWhenFinished;
    NSArray *_validPurchases;
}

@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSArray *offers;
@property (weak, nonatomic) SUPurchaseManager *purchaseManager;
@property (retain, nonatomic) NSArray *continuations;
@property (retain, nonatomic) NSArray *errors;
@property (retain, nonatomic) NSArray *validPurchases;

- (void)dealloc;
- (id)initWithItems:(id)arg1;
- (void)setDocumentTargetIdentifier:(id)arg1;
- (id)initWithItems:(id)arg1 offers:(id)arg2;
- (void)setPurchasesAndContinuationsFromPurchases:(id)arg1;
- (void)_validateItems;
- (id)copyContinuationsForPurchases:(id)arg1;
- (CDUnknownFunctionPointerType)errorEqualCallback;
- (id)_copyModifiedErrorsFromDictionary:(struct __CFDictionary *)arg1;
- (id)copyFilteredItemsFromItems:(id)arg1;
- (id)_copyValidPurchasesForItems:(id)arg1;
- (id)everythingFailedErrorForError:(id)arg1;
- (id)mergedErrorForError:(id)arg1 withCount:(long long)arg2;
- (id)_copyUniqueErrorsFromErrors:(id)arg1;

@end
