/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

#import <EmailFoundation/Swift-Protocol.h>

@class EFObservable, NSString;

@protocol EFCancelable, EFObserver;

@interface EFDebouncer : NSObject <Swift>

{
    EFObservable<EFObserver> *_observable;
    id <EFCancelable> _cancelable;
}

@property (nonatomic, readonly) EFObservable<EFObserver> *observable;
@property (nonatomic, readonly) id <EFCancelable> cancelable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (id)initWithTimeInterval:(double)arg1 scheduler:(id)arg2 startAfter:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)debounceResult:(id)arg1;

@end
