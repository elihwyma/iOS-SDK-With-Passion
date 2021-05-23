/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/EFObservable.h>

@protocol EFObservable;

@interface _EFSamplingObservable : EFObservable

{
    id <EFObservable> _observable;
    id <EFObservable> _sampler;
}

- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 sampler:(id)arg2;

@end
