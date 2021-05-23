/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _TILanguageLikelihoodModel : NSObject

{
    void *_languageLikelihoodModelRef;
}

@property (nonatomic, readonly) void *languageLikelihoodModelRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)singletonInstance;
+ (id)sharedLanguageLikelihoodModel;
+ (void)setSharedLanguageLikelihoodModel:(id)arg1;

- (id)init;
- (void)addEvidence:(id)arg1 timestamp:(double)arg2 adaptationType:(int)arg3 forRecipient:(id)arg4 app:(id)arg5 language:(id)arg6;
- (id)rankedLanguagesForRecipient:(id)arg1;
- (void)priorProbabilityForLanguages:(id)arg1 recipient:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (double)lastOfflineAdaptationTimeForApp:(id)arg1;
- (unsigned long long)emojiUsageCountForApp:(id)arg1 lastEmojiCountUpdateTime:(double *)arg2;

@end
