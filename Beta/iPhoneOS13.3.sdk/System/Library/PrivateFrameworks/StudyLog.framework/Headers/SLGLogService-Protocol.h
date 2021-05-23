/*
 Image: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
 */

#import <StudyLog/Swift-Protocol.h>

@protocol SLGLogService <Swift>

- (unsigned short)beginSessionWithJSONMetadata:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)endSessionAndRenameFileTo:withJSONMetadata:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)reset:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)logJSONData:domain:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)handshake;

@end
