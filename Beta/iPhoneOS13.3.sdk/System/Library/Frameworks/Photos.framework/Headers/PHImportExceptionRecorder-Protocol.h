/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/Swift-Protocol.h>

@class NSMutableArray;

@protocol PHImportExceptionRecorder <Swift>

@property (nonatomic, readonly) NSMutableArray *exceptions;
@property (nonatomic, readonly) NSMutableArray *terminalExceptions;
@property (nonatomic, readonly) NSMutableArray *criticalExceptions;
@property (nonatomic) _Bool hasTerminalException;

- (unsigned short)addExceptionWithMessage:path:importance:nsError:file:line: /* Error: Ran out of types for this method. */;
- (unsigned short)addException: /* Error: Ran out of types for this method. */;
- (unsigned short)addExceptions: /* Error: Ran out of types for this method. */;
- (unsigned short)logForExceptionsOfImportance: /* Error: Ran out of types for this method. */;
- (unsigned short)logForExceptionsOfMinImportance: /* Error: Ran out of types for this method. */;
- (unsigned short)exceptionsOfImportance: /* Error: Ran out of types for this method. */;
- (unsigned short)exceptionsWithMinimumImportance: /* Error: Ran out of types for this method. */;

@end
