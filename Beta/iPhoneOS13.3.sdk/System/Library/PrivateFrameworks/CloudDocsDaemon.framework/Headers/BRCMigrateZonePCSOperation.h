/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCMigrateZonePCSOperation : _BRCOperation

{
    NSMutableArray *_interestingZoneIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (id)initWithSession:(id)arg1;
- (_Bool)shouldRetryForError:(id)arg1;
- (void)_createCloudDocsZone:(CDUnknownBlockType)arg1;
- (void)_fetchZonesNeedingMigration:(CDUnknownBlockType)arg1;

@end
