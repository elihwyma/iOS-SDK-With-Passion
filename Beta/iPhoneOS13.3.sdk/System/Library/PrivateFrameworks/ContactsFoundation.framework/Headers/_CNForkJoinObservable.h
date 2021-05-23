/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNObservable.h>

@class NSArray;

@protocol CNForkJoinResultReportingStrategy;

@interface _CNForkJoinObservable : CNObservable

{
    NSArray *_observables;
    id <CNForkJoinResultReportingStrategy> _resultReportingStrategy;
}

+ (id)forkJoin:(id)arg1;
+ (id)progressiveForkJoin:(id)arg1;

- (id)subscribe:(id)arg1;
- (id)initWithObservables:(id)arg1 reportingStrategy:(id)arg2;

@end
