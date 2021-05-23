/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable, CNScheduler;

@interface _CNScheduledObservable : CNObservable

{
    id <CNObservable> _observable;
    id <CNScheduler> _scheduler;
}

@property (retain, nonatomic) id <CNObservable> observable;
@property (retain, nonatomic) id <CNScheduler> scheduler;

- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 scheduler:(id)arg2;

@end
