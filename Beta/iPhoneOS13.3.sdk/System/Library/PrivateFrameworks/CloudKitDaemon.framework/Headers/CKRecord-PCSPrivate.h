/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKit/CKRecord.h>

@interface CKRecord (PCSPrivate)

@property (nonatomic) struct _OpaquePCSShareProtection *recordPCS;

- (void)fillOutPCSMetadataInfo;

@end
