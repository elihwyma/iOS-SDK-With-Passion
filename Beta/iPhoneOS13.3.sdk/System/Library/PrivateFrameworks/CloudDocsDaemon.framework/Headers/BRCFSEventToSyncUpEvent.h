/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCEventMetric.h>

@class BRCItemID;

__attribute__((visibility("hidden")))
@interface BRCFSEventToSyncUpEvent : BRCEventMetric

{
    _Bool _isPackage;
    unsigned int _genID;
    unsigned long long _fileID;
    BRCItemID *_itemID;
    unsigned long long _mtime;
    unsigned long long _contentSize;
    unsigned long long _syncUpBatchSize;
}

@property (nonatomic) unsigned long long fileID;
@property (nonatomic) unsigned int genID;
@property (retain, nonatomic) BRCItemID *itemID;
@property (nonatomic) unsigned long long mtime;
@property (nonatomic) _Bool isPackage;
@property (nonatomic) unsigned long long syncUpBatchSize;
@property (nonatomic) unsigned long long contentSize;

- (id)additionalPayload;
- (id)subDescription;

@end
