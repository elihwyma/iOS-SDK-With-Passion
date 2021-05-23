/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSManagedObjectID, NSNumber, NSString, NSURL, PLInternalResource, PLManagedAsset;

@interface PLInternalResourceSidecarRepresentation : NSObject

{
    PLInternalResource *_resource;
}

@property (weak, nonatomic) PLInternalResource *resource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (retain, nonatomic, readonly) NSString *filename;
@property (retain, nonatomic, readonly) NSDate *captureDate;
@property (retain, nonatomic, readonly) NSDate *modificationDate;
@property (retain, nonatomic, readonly) NSURL *fileURL;
@property (retain, nonatomic, readonly) NSNumber *compressedSize;
@property (nonatomic, readonly) long long ptpTrashedState;
@property (nonatomic, readonly) unsigned int resourceType;
@property (nonatomic, readonly) NSString *originalFilename;
@property (nonatomic, readonly) NSNumber *index;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) PLManagedAsset *asset;
@property (nonatomic, readonly) short indexValue;
@property (nonatomic, readonly) unsigned long long compressedSizeValue;

- (id)extension;
- (id)initWithResource:(id)arg1;
- (void)setPtpTrashedState:(long long)arg1;

@end
