/*
 Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

#import <Foundation/NSObject.h>

@class WBSPasswordGenerationManager;

@interface SFStrongPasswordGenerator : NSObject

{
    WBSPasswordGenerationManager *_passwordGenerationManager;
}

- (id)init;
- (id)generatedPasswordForAppWithAppID:(id)arg1 associatedDomains:(id)arg2 passwordRules:(id)arg3 confirmPasswordRules:(id)arg4;

@end
