/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class CKDatabase, CKRecordZone, NSCloudKitMirroringDelegateOptions;

__attribute__((visibility("hidden")))
@interface PFCloudKitExporterOptions : NSObject

{
    CKRecordZone *_recordZone;
    CKDatabase *_database;
    NSCloudKitMirroringDelegateOptions *_mirroringDelegateOptions;
    unsigned long long _perOperationBytesThreshold;
    unsigned long long _perOperationObjectThreshold;
}

@property (nonatomic, readonly) CKRecordZone *recordZone;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *mirroringDelegateOptions;
@property (nonatomic) unsigned long long perOperationBytesThreshold;
@property (nonatomic) unsigned long long perOperationObjectThreshold;

- (void)dealloc;
- (id)copy;
- (id)initWithZone:(id)arg1 database:(id)arg2 options:(id)arg3;

@end
