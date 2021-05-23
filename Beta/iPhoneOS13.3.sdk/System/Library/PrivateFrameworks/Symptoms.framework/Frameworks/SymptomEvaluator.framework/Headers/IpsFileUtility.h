/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface IpsFileUtility : NSObject

+ (id)_createIpsFileNameWithPrefix:(id)arg1 date:(id)arg2 inDirectory:(id)arg3;
+ (id)_createDataForCrashReporterIpsHeaderWithBugType:(id)arg1 contentType:(id)arg2 date:(id)arg3 additionalFields:(id)arg4;
+ (id)formattedDateForFilename:(id)arg1;

- (void)dealloc;
- (_Bool)createIpsFileWithBugType:(id)arg1 contentType:(id)arg2 additionalIpsHeaders:(id)arg3 ipsData:(id)arg4 inDirectory:(id)arg5 fileNamePrefix:(id)arg6;
- (_Bool)_checkDirectoryAndCreateIfNecessary:(id)arg1;
- (_Bool)_writeIpsFileWithBugType:(id)arg1 contentType:(id)arg2 additionalIpsHeaders:(id)arg3 ipsData:(id)arg4 inDirectory:(id)arg5 fileNamePrefix:(id)arg6;
- (_Bool)createIpsFileWithBugType:(id)arg1 contentType:(id)arg2 additionalIpsHeaders:(id)arg3 ipsContent:(id)arg4 inDirectory:(id)arg5 fileNamePrefix:(id)arg6;

@end
