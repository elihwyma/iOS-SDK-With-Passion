/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHImportExceptionRecorder.h>

@class NSDate, NSError, NSMutableArray, NSMutableDictionary, PHImportSource;

@interface PHImportResults : PHImportExceptionRecorder

{
    unsigned char _result;
    PHImportSource *_importSource;
    NSMutableArray *_importRecords;
    NSDate *_startTime;
    NSDate *_endTime;
    NSMutableDictionary *_pmrInfo;
}

@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (retain, nonatomic) NSMutableDictionary *pmrInfo;
@property (retain, nonatomic) NSMutableArray *importRecords;
@property (readonly) PHImportSource *importSource;
@property (readonly) unsigned long long importedCount;
@property (readonly) unsigned long long failedToImportCount;
@property (readonly) unsigned char result;
@property (readonly) NSError *error;

+ (id)resultsWithException:(id)arg1;
+ (id)resultsWithExceptions:(id)arg1;

- (id)init;
- (double)runTime;
- (id)criticalExceptions;
- (void)addUnsupportedPath:(id)arg1;
- (void)addImportRecord:(id)arg1;
- (id)importRecordExceptionsOfImportance:(unsigned long long)arg1;
- (id)generatePMRInfo;
- (void)insertStart:(id)arg1 end:(id)arg2 intoGroups:(id)arg3 ofType:(unsigned long long)arg4;
- (void)verifyGroups:(id)arg1;
- (void)log:(id)arg1 activity:(id)arg2 description:(id)arg3 digits:(unsigned long long)arg4;
- (void)logPMR;

@end
