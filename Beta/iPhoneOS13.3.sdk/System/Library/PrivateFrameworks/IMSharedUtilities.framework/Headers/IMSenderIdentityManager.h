/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class CNGeminiManager;

@interface IMSenderIdentityManager : NSObject

{
    CNGeminiManager *_geminiManager;
}

@property (retain, nonatomic) CNGeminiManager *geminiManager;

+ (id)sharedInstance;
+ (_Bool)isTUSenderIdentity:(id)arg1 equalToSubscriptionContext:(id)arg2;

- (id)init;
- (id)bestSenderIdentityForHandleIDs:(id)arg1;
- (id)bestSenderIdentityForHandleID:(id)arg1 contact:(id)arg2;
- (id)bestSenderIdentityForGeminiHandle:(id)arg1 contact:(id)arg2;

@end
