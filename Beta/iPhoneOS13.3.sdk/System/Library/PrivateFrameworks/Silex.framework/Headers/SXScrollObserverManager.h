/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@interface SXScrollObserverManager : NSObject

{
    _Bool _scrolling;
    NSHashTable *_observers;
}

@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic) _Bool scrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)didScroll;
- (void)willStartScrolling;
- (void)didStopScrolling;
- (void)addScrollObserver:(id)arg1;
- (void)removeScrollObserver:(id)arg1;

@end
