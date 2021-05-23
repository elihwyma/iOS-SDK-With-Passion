/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class ACAccount, AMSDialogRequest, AMSProcessInfo, NSDictionary, NSString;

@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSFinanceDialogResponse : NSObject

{
    _Bool _containsCommerceUIURL;
    NSDictionary *_dialogDictionary;
    AMSDialogRequest *_dialogRequest;
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    AMSProcessInfo *_clientInfo;
    NSString *_proxyBundleId;
}

@property (copy, nonatomic) ACAccount *account;
@property (retain, nonatomic) id <AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (copy, nonatomic, readonly) NSDictionary *dialogDictionary;
@property (nonatomic, readonly) AMSDialogRequest *dialogRequest;
@property (nonatomic, readonly) _Bool containsCommerceUIURL;
@property (copy, nonatomic) NSString *proxyBundleId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_createRequestFromDialogDictionary:(id)arg1 kind:(long long)arg2 account:(id)arg3 bag:(id)arg4;
+ (long long)_actionTypeFromButtonDictionary:(id)arg1;
+ (_Bool)_isCommerceUIURL:(id)arg1 actionType:(long long)arg2 URLType:(long long)arg3 bag:(id)arg4;
+ (id)_URLForCommerceUIFromURL:(id)arg1 account:(id)arg2;
+ (id)_createActionFromButtonDictionary:(id)arg1 kind:(long long)arg2 title:(id)arg3 account:(id)arg4 bag:(id)arg5;
+ (id)_createRequestButtonsFromDialogDictionary:(id)arg1 kind:(long long)arg2 account:(id)arg3 bag:(id)arg4;
+ (long long)dialogKindFromPayload:(id)arg1;

- (id)initWithDialogDictionary:(id)arg1 kind:(long long)arg2 account:(id)arg3 clientInfo:(id)arg4 bag:(id)arg5;
- (id)initWithDialogRequest:(id)arg1 account:(id)arg2 clientInfo:(id)arg3 bag:(id)arg4;
- (id)performWithTaskInfo:(id)arg1;
- (id)_sendDialogOverIDSIfNeeded:(id)arg1 taskInfo:(id)arg2 didSend:(_Bool *)arg3;

@end
