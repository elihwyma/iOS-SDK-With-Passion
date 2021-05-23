/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSKQueuedObserverSet : NSObject

{
    int mChangeType;
    id mObserver;
    id mChangeSource;
    _Bool mIsClass;
}

+ (id)queuedObserverSetWithChangeType:(int)arg1 observer:(id)arg2 changeSource:(id)arg3 isClass:(_Bool)arg4;

- (void)dealloc;

@end
