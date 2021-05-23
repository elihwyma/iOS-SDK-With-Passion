/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class NSFileHandle, NSLock, NSRegularExpression, NSString;

@interface SBKLogger : NSObject

{
    NSString *_auxPath;
    NSFileHandle *_fileHandle;
    NSString *_filter;
    NSString *_runtimeOverride;
    int _pid;
    NSString *_procName;
    NSRegularExpression *_runtimeOverrideRegex;
    NSLock *_lock;
}

@property (copy) NSString *filter;
@property (copy) NSString *runtimeOverride;

+ (id)sharedLogger;
+ (_Bool)verboseLoggingEnabled;
+ (_Bool)debugLoggingEnabled;

- (id)init;
- (void)dealloc;
- (void)logString:(id)arg1;
- (_Bool)shouldOverrideCondition:(id)arg1 file:(id)arg2;
- (void)logFunction:(const char *)arg1 format:(id)arg2;
- (void)logFile:(const char *)arg1 lineNumber:(int)arg2 format:(id)arg3;
- (void)_updateSettingsFromPreferences:(id)arg1;
- (void)performLoggingBlock:(CDUnknownBlockType)arg1;
- (void)setAuxPath:(id)arg1;
- (id)auxPath;
- (void)addRuntimeOverride:(id)arg1;
- (void)removeRuntimeOverride:(id)arg1;

@end
