//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ISOperation, NSNumber, NSString, NSURL, NSURLResponse, SSAuthenticationContext, SSBiometricAuthenticationContext, SSURLBagContext;
@protocol ISBiometricSessionDelegate;

@interface ISDataProvider : NSObject <NSCopying>
{
    SSAuthenticationContext *_authenticationContext;
    NSNumber *_authenticatedAccountDSID;
    SSURLBagContext *_bagContext;
    long long _contentLength;
    NSString *_contentType;
    id _output;
    ISOperation *_parentOperation;
    NSURL *_redirectURL;
    SSBiometricAuthenticationContext *_biometricAuthenticationContext;
    long long _errorHandlerResponseType;
    NSUInteger _authenticatedAccountCredentialSource;
    NSURLResponse *_response;
    id <ISBiometricSessionDelegate> _biometricSessionDelegate;
}

+ (id)provider;
@property id <ISBiometricSessionDelegate> biometricSessionDelegate; // @synthesize biometricSessionDelegate=_biometricSessionDelegate;
@property(retain) SSBiometricAuthenticationContext *biometricAuthenticationContext; // @synthesize biometricAuthenticationContext=_biometricAuthenticationContext;
@property(retain) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(retain) NSURLResponse *response; // @synthesize response=_response;
@property __weak ISOperation *parentOperation; // @synthesize parentOperation=_parentOperation;
@property(retain) id output; // @synthesize output=_output;
@property long long errorHandlerResponseType; // @synthesize errorHandlerResponseType=_errorHandlerResponseType;
@property(retain) NSString *contentType; // @synthesize contentType=_contentType;
@property long long contentLength; // @synthesize contentLength=_contentLength;
@property(retain) SSURLBagContext *bagContext; // @synthesize bagContext=_bagContext;
@property(retain) NSNumber *authenticatedAccountDSID; // @synthesize authenticatedAccountDSID=_authenticatedAccountDSID;
@property NSUInteger authenticatedAccountCredentialSource; // @synthesize authenticatedAccountCredentialSource=_authenticatedAccountCredentialSource;
@property(retain) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
// - (void).cxx_destruct;
- (BOOL)_runServerAuthenticationOperation:(id)arg1 error:(id )arg2;
- (void)_performActionsForButton:(id)arg1 withDialog:(id)arg2;
- (BOOL)runTouchIDAuthorizationDialog:(id)arg1 fallbackDialog:(id)arg2 metricsDictionary:(id)arg3 error:(id )arg4;
- (BOOL)runTouchIDAuthorizationDialog:(id)arg1 fallbackDialog:(id)arg2 error:(id )arg3;
- (BOOL)runSubOperation:(id)arg1 error:(id )arg2;
- (BOOL)runAuthorizationDialog:(id)arg1 error:(id )arg2;
- (void)setup;
- (BOOL)parseData:(id)arg1 returningError:(id )arg2;
- (long long)streamedBytes;
- (void)resetStream;
- (void)migrateOutputFromSubProvider:(id)arg1;
- (void)streamDidFailWithError:(id)arg1;
- (void)streamCancelled;
- (BOOL)isStreamComplete;
- (BOOL)isStream;
- (void)configureFromProvider:(id)arg1;
- (id)closeStream;
- (BOOL)canStreamContentLength:(long long)arg1 error:(id )arg2;
// - (id)copyWithZone:(_NSZone )arg1;

@end

