/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface PHImportExceptionRecorder : NSObject

{
    _Bool _hasTerminalException;
    NSMutableArray *_exceptions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableArray *exceptions;
@property (nonatomic, readonly) NSMutableArray *terminalExceptions;
@property (nonatomic, readonly) NSMutableArray *criticalExceptions;
@property (nonatomic) _Bool hasTerminalException;

- (id)init;
- (id)addExceptionWithMessage:(id)arg1 path:(id)arg2 importance:(unsigned long long)arg3 nsError:(id)arg4 file:(char *)arg5 line:(unsigned long long)arg6;
- (void)addException:(id)arg1;
- (void)addExceptions:(id)arg1;
- (id)logForExceptionsOfImportance:(unsigned long long)arg1;
- (id)logForExceptionsOfMinImportance:(unsigned long long)arg1;
- (id)exceptionsOfImportance:(unsigned long long)arg1;
- (id)exceptionsWithMinimumImportance:(unsigned long long)arg1;
- (void)logErrors:(unsigned long long)arg1;

@end
