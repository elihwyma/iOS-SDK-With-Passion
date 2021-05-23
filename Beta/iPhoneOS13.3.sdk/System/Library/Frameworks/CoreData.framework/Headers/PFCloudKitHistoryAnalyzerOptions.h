/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFHistoryAnalyzerOptions.h>

@class CKRecordZone;

__attribute__((visibility("hidden")))
@interface PFCloudKitHistoryAnalyzerOptions : PFHistoryAnalyzerOptions

{
    _Bool _includePrivateTransactions;
    CKRecordZone *_recordZone;
}

@property (retain, nonatomic) CKRecordZone *recordZone;
@property (nonatomic) _Bool includePrivateTransactions;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecordZone:(id)arg1;

@end
