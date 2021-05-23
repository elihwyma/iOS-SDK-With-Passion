/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface ICTableCellChangeNotifier : NSObject

{
    NSHashTable *_observers;
}

@property (retain) NSHashTable *observers;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)notifyOfChangeAtColumnID:(id)arg1 rowID:(id)arg2 delta:(long long)arg3;

@end
