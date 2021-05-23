/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Foundation/NSObject.h>

@class AAUIServerHookResponse, NSString, PSCloudStorageOffersManager;

@protocol AAUIServerHookDelegate;

@interface FABuyStorageHook : NSObject

{
    PSCloudStorageOffersManager *_storageOffersManager;
    CDUnknownBlockType _completion;
    _Bool _loadingStorage;
    id <AAUIServerHookDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (weak, nonatomic) id <AAUIServerHookDelegate> delegate;

- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (void)manager:(id)arg1 didCompleteWithError:(id)arg2;
- (_Bool)shouldMatchElement:(id)arg1;
- (_Bool)shouldMatchModel:(id)arg1;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invokeBuyStorageWithServerAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_completionWithSuccess:(_Bool)arg1 error:(id)arg2;

@end
