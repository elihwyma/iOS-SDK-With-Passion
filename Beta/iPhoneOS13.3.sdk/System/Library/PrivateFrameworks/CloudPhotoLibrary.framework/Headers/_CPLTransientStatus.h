/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLRecordChange, CPLRecordStatus, NSDate;

@interface _CPLTransientStatus : NSObject

{
    NSDate *_date;
    CPLRecordChange *_record;
    unsigned long long _generation;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) CPLRecordChange *record;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, readonly) CPLRecordStatus *status;

- (id)initWithRecord:(id)arg1 generation:(unsigned long long)arg2 date:(id)arg3;

@end
