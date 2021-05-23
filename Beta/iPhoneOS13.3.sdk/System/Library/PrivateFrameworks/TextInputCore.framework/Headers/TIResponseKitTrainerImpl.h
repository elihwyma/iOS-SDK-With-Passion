/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@interface TIResponseKitTrainerImpl : NSObject

+ (id)sharedTrainer;

- (id)_init;
- (void)performTrainingForClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)moveLanguageModelBundlesFromTemporaryDirectory:(id)arg1 toDestination:(id)arg2 error:(id *)arg3;

@end
