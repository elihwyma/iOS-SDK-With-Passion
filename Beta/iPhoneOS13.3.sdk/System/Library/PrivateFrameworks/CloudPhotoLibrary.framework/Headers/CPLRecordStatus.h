/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLRecordChange, NSString;

@interface CPLRecordStatus : NSObject

{
    union {
        struct {
            unsigned int unknown:1;
            unsigned int quarantined:1;
            unsigned int resetting:1;
            unsigned int uploaded:1;
            unsigned int waitingForUpload:1;
            unsigned int uploading:1;
            unsigned int waitingForUpdate:1;
            unsigned int updating:1;
            unsigned int confirmed:1;
        } status;
        unsigned int packedStatus;
    } _status;
    CPLRecordChange *_record;
    unsigned long long _generation;
}

@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, getter=isUnknown) _Bool unknown;
@property (nonatomic, getter=isQuarantined) _Bool quarantined;
@property (nonatomic, getter=isResetting) _Bool resetting;
@property (nonatomic, getter=isUploaded) _Bool uploaded;
@property (nonatomic, getter=isWaitingForUpload) _Bool waitingForUpload;
@property (nonatomic, getter=isUploading) _Bool uploading;
@property (nonatomic, getter=isWaitingForUpdate) _Bool waitingForUpdate;
@property (nonatomic, getter=isUpdating) _Bool updating;
@property (nonatomic, getter=isConfirmed) _Bool confirmed;
@property (nonatomic, readonly) CPLRecordChange *record;
@property (nonatomic, readonly) NSString *statusDescription;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1 generation:(unsigned long long)arg2;

@end
