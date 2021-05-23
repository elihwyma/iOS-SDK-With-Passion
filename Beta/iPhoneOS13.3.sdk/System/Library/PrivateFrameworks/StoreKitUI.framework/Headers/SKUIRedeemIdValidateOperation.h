/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SKUIRedeemIdValidateOperation : ISOperation

{
    CDUnknownBlockType _resultBlock;
    NSDictionary *_dictionary;
}

@property (retain, nonatomic) NSDictionary *dictionary;
@property (copy) CDUnknownBlockType resultBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDictionary:(id)arg1;
- (void)main;
- (id)_subOperation;
- (void)_logResultsForSuccess:(_Bool)arg1 failureReason:(id)arg2 failureMessage:(id)arg3 error:(id)arg4;
- (void)_handleFailure:(id)arg1 serverDialogDictionary:(id)arg2;
- (void)operation:(id)arg1 selectedButton:(id)arg2;

@end
