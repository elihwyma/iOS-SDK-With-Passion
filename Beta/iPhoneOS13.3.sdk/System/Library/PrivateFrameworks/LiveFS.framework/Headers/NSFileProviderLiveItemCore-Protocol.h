/*
 Image: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
 */

@class MISSING_TYPE;

@protocol NSFileProviderLiveItemCore

- (MISSING_TYPE *)LIGetRootFileHandle: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIGetDomainAttributes: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIGetAttr:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LISetAttr:setAttrs:forPID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LILookup:name:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIReclaim:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LICreate:named:withAttrs:forPID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIMakeDir:named:withAttrs:forPID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIMakeSymLink:named:withContents:andAttrs:forPID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIMakeLink:named:inDirectory:forPID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIMakeClone:named:inDirectory:withAttrs:andFlags:forPID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIOpen:withMode:forPID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIClose:withMode:forPID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIRead:atOffset:withBuffer:forPID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIRead:length:atOffset:forPID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIWrite:atOffset:withBuffer:forPID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIReadLink:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIRemove:name:forPID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIRemoveDir:name:forPID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIRename:name:toDir:andName:withFlags:forPID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIReadDir:intoBuffer:forCookie:andVerifier:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIReadDirAndAttrs:intoBuffer:forCookie:andVerifier:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIReadDir:amount:forCookie:andVerifier:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIReadDirAndAttrs:amount:forCookie:andVerifier:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIStatFS:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIPathConf:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIGetFsAttr:name:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LISetFsAttr:name:value:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIGetXattr:name:forPID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LISetXattr:name:value:how:forPID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIListXattrs:forPID:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LISetUpdateInterest:interest:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LISearch:token:criteria:resumeAt:maxData:maxDelay:initialCredits:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LISearchReplenishCredits:credits:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LISearchAbort:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIAccessCheck:requestedAccess:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIVerifyExistenceWithFileIDs:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIGetParentsAndAttributesForFileIDs:reply: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)LIGetPathsAndAttributesForFileIDs:reply: /* Error: Ran out of types for this method. */;

@end
