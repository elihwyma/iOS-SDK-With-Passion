/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSString, _DPDaemonConnection;

@interface _DPReportFileManager : NSObject

{
    NSString *_reportsDirectoryPath;
    _DPDaemonConnection *_connection;
}

@property (copy, nonatomic) NSString *reportsDirectoryPath;
@property (nonatomic, readonly) _DPDaemonConnection *connection;

+ (id)submittedReports;
+ (id)submittedReportsInDirectory:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithDirectoryPath:(id)arg1;
- (id)reportsNotYetSubmitted;
- (void)retireReports:(id)arg1;

@end
