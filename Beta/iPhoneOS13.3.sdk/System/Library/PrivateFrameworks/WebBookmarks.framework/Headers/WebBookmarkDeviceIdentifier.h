/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class NSURL, NSUUID;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WebBookmarkDeviceIdentifier : NSObject

{
    NSURL *_plistURL;
    NSUUID *_UUID;
    _Bool _encounteredErrorWhileObtainingUUID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_fileMonitor;
    _Bool _readOnly;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) _Bool encounteredErrorWhileObtainingUUID;
@property (nonatomic, getter=isReadOnly) _Bool readOnly;

+ (void)_postWebBookmarkMetaDataChangeDistributedNotification:(id)arg1;
+ (void)clearDeviceIdentifierWithPlistURL:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)stopObservingChanges;
- (void)_setUpWithPlistURL:(id)arg1 readOnly:(_Bool)arg2 queue:(id)arg3;
- (void)_createOrLoadMetaData;
- (void)_metaDataDidChange:(id)arg1;
- (void)_registerForMedadaDataFileChangeDistributedNotification;
- (void)_cancelMonitoringMetaDataFile;
- (void)_resumeMonitoringMetaDataFile;
- (id)initWithPlistURL:(id)arg1 readOnly:(_Bool)arg2;

@end
