/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSKChangeNotifier : NSObject

{
    struct __CFDictionary *mChangeSourceObservers;
    struct __CFDictionary *mChangeSourceOfClassObservers;
    struct __CFArray *mQueuedObserverListChanges;
    unsigned long long mProcessingChanges;
    id mQueuedObserverLock;
}

- (id)init;
- (void)dealloc;
- (void)p_queueObserverListChange:(id)arg1;
- (id)p_findCountedObserverForObserver:(id)arg1 inArray:(id)arg2;
- (void)p_addObserver:(id)arg1 forChangeSource:(id)arg2 isClass:(_Bool)arg3;
- (void)p_removeObserver:(id)arg1 forChangeSource:(id)arg2 isClass:(_Bool)arg3;
- (_Bool)p_pendingAddOrRemoveOfObserver:(id)arg1 forChangeSource:(id)arg2;
- (void)p_updateObserverList;
- (void)addObserver:(id)arg1 forChangeSource:(id)arg2;
- (void)removeObserver:(id)arg1 forChangeSource:(id)arg2;
- (void)addObserver:(id)arg1 forChangeSourceOfClass:(Class)arg2;
- (void)removeObserver:(id)arg1 forChangeSourceOfClass:(Class)arg2;
- (void)syncProcessChanges:(id)arg1;
- (void)asyncProcessChanges:(id)arg1;

@end
