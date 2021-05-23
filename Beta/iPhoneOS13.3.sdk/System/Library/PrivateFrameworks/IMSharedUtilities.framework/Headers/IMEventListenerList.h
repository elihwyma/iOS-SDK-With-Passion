/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface IMEventListenerList : NSObject

{
    NSMutableArray *_eventListeners;
}

- (id)init;
- (unsigned long long)count;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;

@end
