/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSArray.h>

@interface NSArray (PKArrayAdditions)

+ (id)pk_FilteredShippingErrorsForContactFields:(id)arg1 errors:(id)arg2;
+ (id)paymentContactInvalidErrorWithContactField:(id)arg1 localizedDescription:(id)arg2;
+ (id)pk_FilteredBillingErrorsForContactFields:(id)arg1 errors:(id)arg2;
+ (id)paymentBillingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2;
+ (id)paymentShippingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2;
+ (id)paymentShippingAddressUnserviceableErrorWithLocalizedDescription:(id)arg1;
+ (id)pk_FilteredCardErrors:(id)arg1;

- (_Bool)pk_containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)pk_arrayByApplyingBlock:(CDUnknownBlockType)arg1;
- (void)_pk_enumerateObjectsFromIndex:(unsigned long long)arg1 onQueue:(id)arg2 usingAsynchronousBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)pk_arrayByRemovingObject:(id)arg1;
- (id)pk_arrayByRemovingObjectsInArray:(id)arg1;
- (id)pk_shuffledArray;
- (id)pk_objectsPassingTest:(CDUnknownBlockType)arg1;
- (void)pk_enumerateObjectsOnQueue:(id)arg1 usingAsynchronousBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end
