/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKit/CKRecordZone.h>

@interface CKRecordZone (PCSPrivate)

@property (nonatomic) struct _OpaquePCSShareProtection *zonePCS;
@property (nonatomic) struct _OpaquePCSShareProtection *zoneishPCS;

- (void)fillOutPCSMetadataInfo;

@end
