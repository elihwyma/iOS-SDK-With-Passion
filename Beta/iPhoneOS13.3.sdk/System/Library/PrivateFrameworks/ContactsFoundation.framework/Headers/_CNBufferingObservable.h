/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNObservable.h>

@class NSMutableArray;

@protocol CNObservable, _CNBufferingStrategy;

@interface _CNBufferingObservable : CNObservable

{
    id <_CNBufferingStrategy> _strategy;
    id <CNObservable> _observable;
    NSMutableArray *_results;
}

@property (retain, nonatomic) id <_CNBufferingStrategy> strategy;
@property (retain, nonatomic) id <CNObservable> observable;
@property (retain, nonatomic) NSMutableArray *results;

- (id)subscribe:(id)arg1;
- (id)initWithLength:(unsigned long long)arg1 observable:(id)arg2;
- (id)initWithLength:(unsigned long long)arg1 timeInterval:(double)arg2 scheduler:(id)arg3 observable:(id)arg4;
- (id)initWithTimeInterval:(double)arg1 scheduler:(id)arg2 observable:(id)arg3;
- (id)initWithBufferingStrategy:(id)arg1 observable:(id)arg2;
- (void)sendBufferedResultsToObserver:(id)arg1;

@end
