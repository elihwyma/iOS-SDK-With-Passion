/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTask.h>

@class NSArray, NSString;

@interface CoreDAVSRVLookupTask : CoreDAVTask

{
    NSString *_serviceString;
    NSArray *_fetchedRecords;
    struct __CFHost *_host;
}

@property (retain, nonatomic) NSString *serviceString;
@property (retain, nonatomic) NSArray *fetchedRecords;
@property (nonatomic) struct __CFHost *host;

- (void)dealloc;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)performCoreDAVTask;
- (id)initWithServiceString:(id)arg1;

@end
