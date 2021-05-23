/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFSession.h>

@class NSDictionary, NSString;

@interface NFECommercePaymentSession : NFSession

{
    NSDictionary *_appletsById;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)appletWithIdentifier:(id)arg1;
- (id)allApplets;
- (id)performECommercePayment:(id)arg1 request:(id)arg2 error:(id *)arg3;
- (void)didStartSession:(id)arg1;
- (id)performECommercePayment:(id)arg1 request:(id)arg2;

@end
