/*
 Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface STCFUpdateScripts : NSObject

{
    NSDictionary *_updatedScripts;
}

- (id)init;
- (void)_getUpdatedScripts;
- (void)_writeUpdatedReplayFileAt:(id)arg1 withObjects:(id)arg2 error:(id *)arg3;
- (void)updateCFScriptsForReplayFile:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
