/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PXCMMComposeRecipientDataSource, PXIDSAddressQueryController;

@protocol PXCMMComposeRecipientValidationManagerDelegate;

@interface PXCMMComposeRecipientValidationManager : NSObject

{
    NSMutableDictionary *_composeRecipientsToQuery;
    NSMutableDictionary *_queryAddressesToComposeRecipientQuery;
    PXIDSAddressQueryController *_addressQueryController;
    PXCMMComposeRecipientDataSource *_dataSource;
    id <PXCMMComposeRecipientValidationManagerDelegate> _delegate;
}

@property (nonatomic, readonly) PXCMMComposeRecipientDataSource *dataSource;
@property (weak, nonatomic) id <PXCMMComposeRecipientValidationManagerDelegate> delegate;

+ (id)new;

- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)_handleAddressQueryResults:(id)arg1 error:(id)arg2;
- (void)_requestValidationForComposeRecipientsAtIndexes:(id)arg1;
- (long long)validationTypeForComposeRecipient:(id)arg1;

@end
