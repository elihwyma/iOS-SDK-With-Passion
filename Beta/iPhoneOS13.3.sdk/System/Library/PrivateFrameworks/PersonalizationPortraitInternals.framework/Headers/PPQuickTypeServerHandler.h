/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPQuickTypeServerHandler : NSObject

- (id)init;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)quickTypeItemsWithLanguageModelingTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4 limit:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)recentQuickTypeItemsForRecipients:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)warmUpWithCompletion:(CDUnknownBlockType)arg1;
- (void)hibernateWithCompletion:(CDUnknownBlockType)arg1;

@end
