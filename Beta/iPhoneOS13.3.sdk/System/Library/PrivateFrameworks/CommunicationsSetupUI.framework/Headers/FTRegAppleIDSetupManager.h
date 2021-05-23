/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Foundation/NSObject.h>

@class IDSAccountController, NSArray, NSMutableDictionary, NSString;

@interface FTRegAppleIDSetupManager : NSObject

{
    NSMutableDictionary *_setupOperations;
    CDUnknownBlockType _handler;
    NSArray *_candidateAliases;
    NSArray *_selectedAliases;
    NSString *_selectionSummaryText;
    IDSAccountController *_iMessageAccountController;
    IDSAccountController *_faceTimeAccountController;
}

@property (retain, nonatomic) IDSAccountController *iMessageAccountController;
@property (retain, nonatomic) IDSAccountController *faceTimeAccountController;
@property (retain, nonatomic) NSMutableDictionary *setupOperations;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (copy, nonatomic) NSArray *candidateAliases;
@property (copy, nonatomic) NSString *selectionSummaryText;
@property (nonatomic, readonly) _Bool shouldShowAliasSelectionUI;
@property (copy, nonatomic) NSArray *selectedAliases;

+ (id)sharedInstance;

- (id)init;
- (void)_cleanup;
- (id)_appleID;
- (void)_notifySuccess:(_Bool)arg1 error:(id)arg2;
- (id)accountControllerForService:(id)arg1;
- (void)_updateCandidateAliases;
- (_Bool)_shouldAttemptAccountRegistration;
- (_Bool)showsPhoneNumberDisplayString;
- (_Bool)_shouldShowAliasSelectionUI;
- (id)phoneNumberDisplayString;
- (void)_updateSelectionSummaryText;
- (void)_notifySuccess;
- (void)_notifyFailureWithError:(id)arg1;
- (id)_aliasesForDictionary:(id)arg1;
- (void)addSetupDictionary:(id)arg1 forService:(long long)arg2;
- (_Bool)aliasIsEnabled:(id)arg1;
- (_Bool)beginSetupWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
