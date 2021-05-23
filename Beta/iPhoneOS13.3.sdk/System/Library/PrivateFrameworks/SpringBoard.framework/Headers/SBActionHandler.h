/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@interface SBActionHandler : NSObject

{
    _Bool _capturingDisplayDump;
    NSHashTable *_externalHandlers;
}

@property (retain, nonatomic) NSHashTable *externalHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)removeActionHandler:(id)arg1;
- (void)addActionHandler:(id)arg1;
- (void)handleActions:(id)arg1 origin:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)_reportAndKillInsecureProcesses:(id)arg1;
- (void)_executeRestartAction:(id)arg1 fromProcess:(id)arg2;
- (_Bool)_shouldPromptForSecureDrawViolations;
- (void)_captureRadarAttachmentsWithCompletion:(CDUnknownBlockType)arg1;

@end
