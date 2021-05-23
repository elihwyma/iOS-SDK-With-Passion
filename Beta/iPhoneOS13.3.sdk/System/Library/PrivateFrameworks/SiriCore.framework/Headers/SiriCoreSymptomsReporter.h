/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@interface SiriCoreSymptomsReporter : NSObject

+ (id)sharedInstance;

- (id)_processNameForPid:(int)arg1;
- (void)_getTypeForError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_subtypeContextStringFromContext:(id)arg1;
- (void)reportIssueForError:(id)arg1 type:(long long)arg2 context:(id)arg3 processIdentifier:(int)arg4 walkboutStatus:(_Bool)arg5;
- (void)reportIssueForType:(id)arg1 subType:(id)arg2 context:(id)arg3 processIdentifier:(int)arg4 walkboutStatus:(_Bool)arg5;

@end
