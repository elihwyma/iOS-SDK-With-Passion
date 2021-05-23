/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMCaptureCoordinationInfo, NSData, NSDate, NSError, NSString, NSURL;

@interface CAMVideoLocalPersistenceResult : NSObject

{
    NSURL *_localDestinationURL;
    NSURL *_filteredLocalDestinationURL;
    NSURL *_linkedDestinationURL;
    NSURL *_filteredLinkedDestinationURL;
    NSString *_filteredVideoPreviewPath;
    NSString *_localPersistenceUUID;
    CDStruct_79c71658 _dimensions;
    NSString *_stillPersistenceUUID;
    NSDate *_creationDate;
    NSData *_adjustmentsData;
    CAMCaptureCoordinationInfo *_coordinationInfo;
    NSError *_error;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _stillDisplayTime;
}

@property (copy, nonatomic, readonly) NSURL *localDestinationURL;
@property (copy, nonatomic, readonly) NSURL *filteredLocalDestinationURL;
@property (copy, nonatomic, readonly) NSURL *linkedDestinationURL;
@property (copy, nonatomic, readonly) NSURL *filteredLinkedDestinationURL;
@property (copy, nonatomic, readonly) NSString *filteredVideoPreviewPath;
@property (copy, nonatomic, readonly) NSString *localPersistenceUUID;
@property (nonatomic, readonly) CDStruct_1b6d18a9 duration;
@property (nonatomic, readonly) CDStruct_79c71658 dimensions;
@property (copy, nonatomic, readonly) NSString *stillPersistenceUUID;
@property (nonatomic, readonly) CDStruct_1b6d18a9 stillDisplayTime;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSData *adjustmentsData;
@property (nonatomic, readonly) CAMCaptureCoordinationInfo *coordinationInfo;
@property (nonatomic, readonly) NSError *error;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 filteredLocalDestinationURL:(id)arg2 linkedURL:(id)arg3 filteredLinkedURL:(id)arg4 videoThumbnailPath:(id)arg5 UUID:(id)arg6 duration:(CDStruct_1b6d18a9)arg7 dimensions:(CDStruct_79c71658)arg8 stillPersistenceUUID:(id)arg9 stillDisplayTime:(CDStruct_1b6d18a9)arg10 creationDate:(id)arg11 adjustmentsData:(id)arg12 coordinationInfo:(id)arg13 error:(id)arg14;

@end
