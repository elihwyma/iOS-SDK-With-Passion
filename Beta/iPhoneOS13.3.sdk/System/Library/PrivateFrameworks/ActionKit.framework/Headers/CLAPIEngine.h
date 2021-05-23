/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, NSURL;

@protocol CLAPIEngineDelegate;

@interface CLAPIEngine : NSObject

{
    NSString *_email;
    NSString *_password;
    NSURL *_baseURL;
    id <CLAPIEngineDelegate> _delegate;
    NSMutableSet *_transactions;
    _Bool _clearsCookies;
}

@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) id <CLAPIEngineDelegate> delegate;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) NSMutableSet *transactions;
@property (nonatomic) _Bool clearsCookies;

+ (void)initialize;
+ (id)engine;
+ (id)defaultBaseURL;
+ (id)engineWithDelegate:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isReady;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)createAccountWithEmail:(id)arg1 password:(id)arg2 acceptTerms:(_Bool)arg3 userInfo:(id)arg4;
- (id)changeNameOfItem:(id)arg1 toName:(id)arg2 userInfo:(id)arg3;
- (id)changeNameOfItemAtHref:(id)arg1 toName:(id)arg2 userInfo:(id)arg3;
- (id)changePrivacyOfItem:(id)arg1 toPrivate:(_Bool)arg2 userInfo:(id)arg3;
- (id)changePrivacyOfItemAtHref:(id)arg1 toPrivate:(_Bool)arg2 userInfo:(id)arg3;
- (id)getAccountInformationWithUserInfo:(id)arg1;
- (id)bookmarkLinkWithURL:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (id)bookmarkLinkWithURL:(id)arg1 name:(id)arg2 options:(id)arg3 userInfo:(id)arg4;
- (id)restoreItem:(id)arg1 userInfo:(id)arg2;
- (id)restoreItemAtHref:(id)arg1 userInfo:(id)arg2;
- (id)deleteItem:(id)arg1 userInfo:(id)arg2;
- (id)getItemInformationAtURL:(id)arg1 userInfo:(id)arg2;
- (id)getItemInformation:(id)arg1 userInfo:(id)arg2;
- (id)deleteItemAtHref:(id)arg1 userInfo:(id)arg2;
- (id)getItemListStartingAtPage:(long long)arg1 itemsPerPage:(long long)arg2 userInfo:(id)arg3;
- (id)getItemListStartingAtPage:(long long)arg1 ofType:(long long)arg2 itemsPerPage:(long long)arg3 userInfo:(id)arg4;
- (id)getItemListStartingAtPage:(long long)arg1 ofType:(long long)arg2 itemsPerPage:(long long)arg3 showOnlyItemsInTrash:(_Bool)arg4 userInfo:(id)arg5;
- (id)uploadFileWithName:(id)arg1 fileData:(id)arg2 userInfo:(id)arg3;
- (id)uploadFileWithName:(id)arg1 fileData:(id)arg2 options:(id)arg3 userInfo:(id)arg4;
- (id)uploadFileWithName:(id)arg1 fileURL:(id)arg2 options:(id)arg3 userInfo:(id)arg4;
- (id)uploadFileWithName:(id)arg1 fileData:(id)arg2 fileURL:(id)arg3 options:(id)arg4 userInfo:(id)arg5;
- (id)getStoreProductsWithUserInfo:(id)arg1;
- (id)redeemStoreReceipt:(id)arg1 userInfo:(id)arg2;
- (void)cancelConnection:(id)arg1;
- (void)cancelAllConnections;
- (id)userInfoForConnectionIdentifier:(id)arg1;
- (long long)requestTypeForConnectionIdentifier:(id)arg1;
- (id)_createAndStartConnectionForTransaction:(id)arg1;
- (id)_transactionForConnection:(id)arg1;
- (id)_transactionForConnectionIdentifier:(id)arg1;
- (id)_URLWithPath:(id)arg1;

@end
