/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNObservable.h>

@class NSArray, NSMapTable, NSString;

@interface _CNAmbObservable : CNObservable

{
    NSArray *_observables;
    NSMapTable *_tokensByObserver;
    _Bool _winnerDeclared;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)subscribe:(id)arg1;
- (id)initWithObservables:(id)arg1;
- (void)cancelRemainingObservables;
- (void)observerWillRelayEvent:(id)arg1;

@end
