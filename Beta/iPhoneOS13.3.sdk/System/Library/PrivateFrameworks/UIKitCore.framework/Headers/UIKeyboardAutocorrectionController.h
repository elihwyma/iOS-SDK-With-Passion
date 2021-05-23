/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSHashTable, TIAutocorrectionList, TIKeyboardCandidate;

__attribute__((visibility("hidden")))
@interface UIKeyboardAutocorrectionController : NSObject

{
    unsigned long long _signpostToken;
    _Bool _requestedAutocorrection;
    _Bool _needsAutocorrection;
    _Bool _deferredAutocorrection;
    TIAutocorrectionList *_autocorrectionList;
    TIAutocorrectionList *_textSuggestionList;
    NSHashTable *_autocorrectionObservers;
}

@property (nonatomic) _Bool needsAutocorrection;
@property (nonatomic) _Bool deferredAutocorrection;
@property (nonatomic) _Bool requestedAutocorrection;
@property (retain, nonatomic) NSHashTable *autocorrectionObservers;
@property (nonatomic, readonly) TIKeyboardCandidate *autocorrection;
@property (retain, nonatomic) TIAutocorrectionList *autocorrectionList;
@property (retain, nonatomic) TIAutocorrectionList *textSuggestionList;

- (id)init;
- (void)requestAutocorrectionWithExecutionContext:(id)arg1;
- (void)_notifyObserversOfUpdatedAutocorrectionList:(id)arg1;
- (void)_setAutocorrectionList:(id)arg1 notifyObserver:(_Bool)arg2;
- (void)clearAutocorrectionAndNotifyObservers:(_Bool)arg1;
- (_Bool)hasAutofillCandidates;
- (void)_notifyObserversOfClearedAutocorrectionList;
- (_Bool)hasAutocorrection;
- (void)addAutocorrectionObserver:(id)arg1;
- (void)removeAutocorrectionObserver:(id)arg1;
- (void)updateSuggestionViews;
- (void)setNeedsAutocorrection;
- (void)clearAutocorrection;
- (void)clearAutofillAndTextSuggestions;
- (_Bool)hasCaseableAutocorrection;
- (_Bool)hasContinuousPathConversions;

@end
