/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableIndexSet, NSString;

@interface _CNForkJoinProgressiveResultObservationStrategy : NSObject

{
    NSArray *_results;
    unsigned long long _activeObservableIdx;
    NSMutableIndexSet *_finishedObservables;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCapacity:(unsigned long long)arg1;
- (void)receiveResult:(id)arg1 fromObservableAtIndex:(unsigned long long)arg2 observer:(id)arg3;
- (void)observableAtIndex:(unsigned long long)arg1 didCompleteForObserver:(id)arg2;

@end
