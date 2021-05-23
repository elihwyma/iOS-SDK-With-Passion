/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface MapsSuggestionsFakeShortcutStorage : NSObject

{
    struct ReadWriteQueue _rwQueue;
    struct NSArray *_fakeResults;
    struct NSArray *_passedInput;
    NSError *_fakeError;
    unsigned long long _calledLoad;
    unsigned long long _calledAddOrUpdate;
    unsigned long long _calledRemove;
    unsigned long long _calledMove;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (id)init;
- (void)reset;
- (id).cxx_construct;
- (void)setChangeHandler:(CDUnknownBlockType)arg1;
- (void)configureError:(id)arg1;
- (void)configureResults:(struct NSArray *)arg1;
- (_Bool)addOrUpdateShortcuts:(struct NSArray *)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)loadAllShortcutsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)removeShortcuts:(struct NSArray *)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)moveShortcutToFront:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)moveShortcutToBack:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)moveShortcut:(id)arg1 toIndex:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (struct NSArray *)passedInput;
- (unsigned long long)calledRequestLoad;
- (unsigned long long)calledAddOrUpdate;
- (unsigned long long)calledRemove;
- (unsigned long long)calledMove;

@end
