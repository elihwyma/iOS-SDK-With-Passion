/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@class NSError;

@interface _CNObservableFailureEvent

{
    NSError *_error;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)error;
- (id)value;
- (unsigned long long)eventType;
- (id)initWithError:(id)arg1;
- (_Bool)hasValue;
- (void)dematerializeWithObserver:(id)arg1;

@end
