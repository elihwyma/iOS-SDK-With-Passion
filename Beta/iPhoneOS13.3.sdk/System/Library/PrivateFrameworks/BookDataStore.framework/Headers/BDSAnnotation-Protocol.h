/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/Swift-Protocol.h>

@class NSData, NSDate, NSNumber, NSString;

@protocol BDSAnnotation <Swift>

@property (retain, nonatomic, readonly) NSDate *annotationCreationDate;
@property (retain, nonatomic, readonly) NSString *annotationCreatorIdentifier;
@property (nonatomic, readonly, getter=isAnnotationDeleted) _Bool annotationDeleted;
@property (nonatomic, readonly) _Bool annotationIsUnderline;
@property (retain, nonatomic, readonly) NSString *annotationLocation;
@property (retain, nonatomic, readonly) NSDate *annotationModificationDate;
@property (retain, nonatomic, readonly) NSString *annotationNote;
@property (retain, nonatomic, readonly) NSString *annotationRepresentativeText;
@property (retain, nonatomic, readonly) NSString *annotationSelectedText;
@property (retain, nonatomic, readonly) NSNumber *annotationStyleNumber;
@property (retain, nonatomic, readonly) NSNumber *annotationTypeNumber;
@property (retain, nonatomic, readonly) NSString *annotationUuid;
@property (retain, nonatomic, readonly) NSNumber *plAbsolutePhysicalLocation;
@property (retain, nonatomic, readonly) NSNumber *plLocationRangeStart;
@property (retain, nonatomic, readonly) NSNumber *plLocationRangeEnd;
@property (retain, nonatomic, readonly) NSData *plUserData;
@property (retain, nonatomic, readonly) NSString *plStorageUUID;
@property (retain, nonatomic, readonly) NSString *physicalPageNumber;
@property (retain, nonatomic, readonly) NSString *annotationVersion;
@property (retain, nonatomic, readonly) NSString *assetVersion;
@property (retain, nonatomic, readonly) NSString *attachments;
@property (retain, nonatomic, readonly) NSString *chapterTitle;
@property (retain, nonatomic, readonly) NSDate *userModificationDate;
@property (nonatomic, readonly) struct _NSRange annotationSelectedTextRange;
@property (nonatomic, readonly) float readingProgressHighWaterMark;
@property (nonatomic, readonly) float readingProgress;
@property (nonatomic, readonly) _Bool spineIndexUpdated;
@property (retain, nonatomic, readonly) NSDate *locationModificationDate;
@property (retain, nonatomic, readonly) NSString *futureProofing12;

@end
