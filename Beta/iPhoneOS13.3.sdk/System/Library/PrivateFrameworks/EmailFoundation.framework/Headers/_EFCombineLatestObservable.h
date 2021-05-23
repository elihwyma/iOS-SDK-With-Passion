/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/EFObservable.h>

@class NSArray;

@interface _EFCombineLatestObservable : EFObservable

{
    NSArray *_observables;
}

@property (copy, nonatomic) NSArray *observables;

- (id)subscribe:(id)arg1;
- (id)initWithObservables:(id)arg1;

@end
