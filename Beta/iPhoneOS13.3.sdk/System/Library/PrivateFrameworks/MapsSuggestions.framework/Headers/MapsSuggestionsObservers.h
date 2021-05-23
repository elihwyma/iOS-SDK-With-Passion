/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class NSHashTable, NSString;

@interface MapsSuggestionsObservers : NSObject <Swift>

{
    struct NSString *_name;
    struct unique_ptr<MSg::Queue, std::__1::default_delete<MSg::Queue>> _callbackQueue;
    NSHashTable *_innerObservers;
    CDUnknownBlockType _onFirstObserverBlock;
    CDUnknownBlockType _onLastObserverBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (id)init;
- (void)dealloc;
- (unsigned long long)count;
- (unsigned long long)_count;
- (id)initWithName:(struct NSString *)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id).cxx_construct;
- (_Bool)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithCallbackQueue:(id)arg1 name:(struct NSString *)arg2 strong:(_Bool)arg3;
- (id)initWithCallbackQueue:(id)arg1 name:(struct NSString *)arg2;
- (void)onAddingObserverRunBlock:(CDUnknownBlockType)arg1;
- (void)onRemovingObserverRunBlock:(CDUnknownBlockType)arg1;
- (_Bool)synchronouslyEnumerateWithBlock:(CDUnknownBlockType)arg1;

@end
