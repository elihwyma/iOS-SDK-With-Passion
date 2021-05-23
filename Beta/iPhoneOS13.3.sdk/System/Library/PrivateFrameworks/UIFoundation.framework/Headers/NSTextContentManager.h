/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSTextLayoutManager, NSTextRange;

@protocol NSTextContentManagerDelegate;

@interface NSTextContentManager : NSObject

{
    NSMutableArray *_textLayoutManagers;
    NSTextLayoutManager *_primaryTextLayoutManager;
    _Atomic unsigned long long _transactionStack;
    NSMutableArray *_editHistory;
    _Bool _synchronizesTextLayoutManagersAutomatically;
    _Bool _synchronizesToBackingStoreAutomatically;
    id <NSTextContentManagerDelegate> _delegate;
    unsigned long long _maximumNumberOfUncachedElements;
}

@property (weak) id <NSTextContentManagerDelegate> delegate;
@property (copy, readonly) NSArray *textLayoutManagers;
@property NSTextLayoutManager *primaryTextLayoutManager;
@property unsigned long long maximumNumberOfUncachedElements;
@property (readonly) _Bool hasEditingTransaction;
@property _Bool synchronizesTextLayoutManagersAutomatically;
@property _Bool synchronizesToBackingStoreAutomatically;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSTextRange *documentRange;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeTextLayoutManager:(id)arg1;
- (void)addTextLayoutManager:(id)arg1;
- (id)enumerateTextElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)synchronizeTextLayoutManagers:(CDUnknownBlockType)arg1;
- (void)replaceCharactersInRange:(id)arg1 withTextElements:(id)arg2;
- (void)_incrementTransactionStack;
- (void)_decrementTransactionStack;
- (_Bool)synchronizeToBackingStore:(CDUnknownBlockType)arg1;
- (id)textElementsForRange:(id)arg1;
- (void)performEditingTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)addEditActionInRange:(id)arg1 newTextRange:(id)arg2;

@end
