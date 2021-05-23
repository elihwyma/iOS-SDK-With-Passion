/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

@class ASTAuthInfoResult, ASTIdentity, ASTProfileResult, ASTSession, NSDictionary, NSString;

@interface ASTAutomatedSession : NSObject

{
    ASTIdentity *_identity;
    CDUnknownBlockType _completion;
    ASTSession *_session;
    NSDictionary *_tests;
    ASTProfileResult *_profile;
    ASTAuthInfoResult *_authInfo;
    CDUnknownBlockType _authInfoHandler;
}

@property (retain, nonatomic) ASTIdentity *identity;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (retain, nonatomic) ASTSession *session;
@property (retain, nonatomic) NSDictionary *tests;
@property (retain, nonatomic) ASTProfileResult *profile;
@property (retain, nonatomic) ASTAuthInfoResult *authInfo;
@property (copy, nonatomic) CDUnknownBlockType authInfoHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)sessionExistsForSerialNumbers:(id)arg1 ticketNumber:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)sessionExistsForIdentities:(id)arg1 ticketNumber:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)sessionWithSerialNumber:(id)arg1 profile:(id)arg2 tests:(id)arg3 authInfoHandler:(CDUnknownBlockType)arg4;
+ (id)sessionWithIdentity:(id)arg1 profile:(id)arg2 tests:(id)arg3 authInfoHandler:(CDUnknownBlockType)arg4;

- (void)end;
- (void)session:(id)arg1 didEndWithError:(id)arg2;
- (void)session:(id)arg1 startTest:(id)arg2 parameters:(id)arg3 testResult:(id)arg4;
- (void)session:(id)arg1 cancelTest:(id)arg2;
- (void)session:(id)arg1 profile:(id)arg2 filteredByComponents:(id)arg3;
- (void)session:(id)arg1 generateAuthInfoWithNonce:(id)arg2;
- (id)initWithIdentity:(id)arg1 profile:(id)arg2 tests:(id)arg3 authInfoHandler:(CDUnknownBlockType)arg4;
- (void)executeWithCompletion:(CDUnknownBlockType)arg1;

@end
