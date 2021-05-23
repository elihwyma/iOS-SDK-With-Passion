/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSDate, NSManagedObjectID, NSNumber, NSString, NSURL;

@protocol PLPTPTransferableSidecarFile <Swift>

@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (retain, nonatomic, readonly) NSString *filename;
@property (retain, nonatomic, readonly) NSDate *captureDate;
@property (retain, nonatomic, readonly) NSDate *modificationDate;
@property (retain, nonatomic, readonly) NSURL *fileURL;
@property (retain, nonatomic, readonly) NSNumber *compressedSize;
@property (nonatomic, readonly) long long ptpTrashedState;
@property (nonatomic, readonly) unsigned int resourceType;

@end
