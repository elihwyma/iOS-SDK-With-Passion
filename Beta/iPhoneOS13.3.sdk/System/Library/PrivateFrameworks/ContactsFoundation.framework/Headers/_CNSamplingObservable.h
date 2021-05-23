/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNObservable.h>

@protocol CNCancelable, CNObservable;

@interface _CNSamplingObservable : CNObservable

{
    id <CNObservable> _observable;
    id <CNObservable> _sampler;
    id _sample;
    id <CNCancelable> _timer;
}

@property (nonatomic, readonly) id <CNObservable> observable;
@property (nonatomic, readonly) id <CNObservable> sampler;
@property (retain) id sample;
@property (retain) id <CNCancelable> timer;

- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 sampler:(id)arg2;
- (void)sendSampleToObserver:(id)arg1;
- (void)receiveResult:(id)arg1;

@end
