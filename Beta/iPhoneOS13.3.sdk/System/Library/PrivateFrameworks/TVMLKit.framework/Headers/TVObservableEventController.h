/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

#import <TVMLKit/Swift-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString;

@interface TVObservableEventController : NSObject <Swift>

{
    NSMutableDictionary *_observerRecords;
    NSMapTable *_eventsByObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 forEvent:(id)arg2;
- (void)removeObserver:(id)arg1 forEvent:(id)arg2;
- (void)dispatchEvent:(id)arg1 sender:(id)arg2 withUserInfo:(id)arg3;

@end
