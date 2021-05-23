/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNObservable.h>

@protocol CNSchedulerProvider;

@interface _CNFlatMapObservable : CNObservable

{
    CNObservable *_observable;
    CDUnknownBlockType _decoratorGenerator;
    id <CNSchedulerProvider> _schedulerProvider;
}

@property (nonatomic, readonly) CNObservable *observable;
@property (copy, nonatomic, readonly) CDUnknownBlockType decoratorGenerator;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;

+ (id)concatMapWithObservable:(id)arg1 transform:(CDUnknownBlockType)arg2 schedulerProvider:(id)arg3;
+ (id)flatMapWithObservable:(id)arg1 transform:(CDUnknownBlockType)arg2 schedulerProvider:(id)arg3;
+ (id)observableWithObservable:(id)arg1 transform:(CDUnknownBlockType)arg2 decoratorGenerator:(CDUnknownBlockType)arg3 schedulerProvider:(id)arg4;

- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 transform:(CDUnknownBlockType)arg2 decoratorGenerator:(CDUnknownBlockType)arg3 schedulerProvider:(id)arg4;
- (id)subscribeInnerObservable:(id)arg1 observer:(id)arg2 context:(id)arg3;

@end
