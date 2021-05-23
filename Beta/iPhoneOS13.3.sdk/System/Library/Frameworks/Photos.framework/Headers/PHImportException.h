/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSDate, NSError, NSString;

@interface PHImportException : NSObject

{
    NSString *_message;
    unsigned long long _importance;
    NSString *_path;
    NSString *_sourceCodeFile;
    unsigned long long _lineNumber;
    NSError *_nsError;
    NSDate *_createDate;
}

@property (nonatomic, readonly) NSDate *createDate;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) unsigned long long importance;
@property (nonatomic, readonly) _Bool isTerminal;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *sourceCodeFile;
@property (nonatomic, readonly) unsigned long long lineNumber;
@property (nonatomic, readonly) NSError *nsError;

+ (id)exceptionWithMessage:(id)arg1 path:(id)arg2 importance:(unsigned long long)arg3 nsError:(id)arg4 file:(char *)arg5 line:(unsigned long long)arg6;
+ (id)mostImportantException:(id)arg1;
+ (id)logForMostImportantException:(id)arg1;
+ (id)logForTerminalExceptionsForRecorder:(id)arg1;
+ (id)logForAllExceptions:(id)arg1;

- (id)description;
- (_Bool)isCritical;
- (id)initWithMessage:(id)arg1 path:(id)arg2 importance:(unsigned long long)arg3 nsError:(id)arg4 file:(char *)arg5 line:(unsigned long long)arg6;
- (id)logWithPrefix:(id)arg1;

@end
