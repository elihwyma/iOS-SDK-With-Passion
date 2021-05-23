/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@interface RKMessageIntentRecognizer : NSObject

+ (id)sharedManager;
+ (id)getRangesOfKeywords:(id)arg1 forMessage:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)copyAttributedTokensForMessage:(id)arg1 conversationTurns:(id)arg2 metadata:(id)arg3 languageID:(id)arg4;
- (void *)getMessageIntentRecognizer:(id)arg1;

@end
