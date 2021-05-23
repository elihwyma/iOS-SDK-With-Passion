/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class CNObservableContractTerminationContext, NSString;

@interface CNObservableContractEnforcement : NSObject

{
    unsigned long long _state;
    CNObservableContractTerminationContext *_terminationContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)os_log;
+ (_Bool)shouldSwizzleNilResults;
+ (_Bool)shouldEnforceRxProtocols;

- (void)observerDidReceiveResult:(id)arg1;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;

@end
