/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@interface BRCCoreAnalyticsReporter : NSObject

+ (void)uploadMetricsReport:(id)arg1;
+ (id)dictionaryForErrorsByZone:(id)arg1 wantPrivateZone:(_Bool)arg2;
+ (_Bool)uploadErrorsAsIndividualEvents:(id)arg1 syncType:(id)arg2 totalItemsCount:(unsigned long long)arg3 zoneType:(id)arg4 zoneCountsOnly:(_Bool)arg5 isFolderSharingEnabled:(_Bool)arg6;
+ (void)sendTelemetryReport:(id)arg1;
+ (id)telemetryDictionaryToUploadForError:(id)arg1 count:(id)arg2 syncType:(id)arg3 totalItemsCount:(id)arg4 zoneType:(id)arg5 zoneCountsOnly:(_Bool)arg6 isFolderSharingEnabled:(_Bool)arg7;

@end
