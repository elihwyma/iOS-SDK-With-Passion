/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, PKPassLibrary;

@interface PKPassLibraryDefaultDataProvider : NSObject

{
    PKPassLibrary *_library;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool canAddPaymentPass;

- (id)init;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)passWithUniqueID:(id)arg1;
- (id)initWithPassLibrary:(id)arg1;
- (id)peerPaymentPassUniqueID;
- (void)removePass:(id)arg1;
- (id)paymentPasses;

@end
