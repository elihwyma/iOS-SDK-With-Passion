/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSDate, NSNumber, NSString, NSURL, PLManagedAsset;

@protocol PLSidecar <Swift>

@property (nonatomic, readonly) NSString *originalFilename;
@property (nonatomic, readonly) NSNumber *index;
@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) NSNumber *compressedSize;
@property (nonatomic, readonly) PLManagedAsset *asset;
@property (nonatomic, readonly) short indexValue;
@property (nonatomic, readonly) unsigned long long compressedSizeValue;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic) long long ptpTrashedState;

@end
