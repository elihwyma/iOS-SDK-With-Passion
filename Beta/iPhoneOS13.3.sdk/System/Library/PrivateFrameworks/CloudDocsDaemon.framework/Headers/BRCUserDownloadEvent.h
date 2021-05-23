/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCEventMetric.h>

@class NSMutableSet, NSUUID;

__attribute__((visibility("hidden")))
@interface BRCUserDownloadEvent : BRCEventMetric

{
    _Bool _didSucceed;
    _Bool _isDownloadingForBackup;
    _Bool _isRecursiveDownload;
    NSUUID *_operationID;
    NSMutableSet *_docIDs;
    unsigned long long _itemCount;
    unsigned long long _totalContentSize;
}

@property (retain, nonatomic) NSUUID *operationID;
@property (retain, nonatomic) NSMutableSet *docIDs;
@property (nonatomic) _Bool didSucceed;
@property (nonatomic) _Bool isDownloadingForBackup;
@property (nonatomic) _Bool isRecursiveDownload;
@property (nonatomic) unsigned long long itemCount;
@property (nonatomic) unsigned long long totalContentSize;

- (id)init;
- (id)additionalPayload;
- (id)subDescription;

@end
