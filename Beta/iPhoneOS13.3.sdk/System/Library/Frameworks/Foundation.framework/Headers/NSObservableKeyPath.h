/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSBoundKeyPath.h>

@class NSString;

@protocol NSObservable;

@interface NSObservableKeyPath : NSBoundKeyPath

@property (readonly) id <NSObservable> changes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)addObserver:(id)arg1;
- (void)removeObservation:(id)arg1;
- (_Bool)_wantsChanges;

@end
