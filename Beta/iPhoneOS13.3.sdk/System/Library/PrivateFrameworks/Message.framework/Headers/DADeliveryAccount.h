/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/DeliveryAccount.h>

@class DAMailAccount;

@interface DADeliveryAccount : DeliveryAccount

{
    DAMailAccount *_DAMailAccount;
}

- (id)newDeliveryWithMessage:(id)arg1;
- (id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;
- (id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
- (id)initWithDAMailAccount:(id)arg1;
- (Class)deliveryClass;
- (id)mailAccountIfAvailable;

@end
