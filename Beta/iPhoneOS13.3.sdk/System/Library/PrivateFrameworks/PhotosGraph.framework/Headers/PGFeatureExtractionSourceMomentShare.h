/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGFeatureExtractionSourceMomentShare : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)extractSharingRecordsWithManager:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)fetchMomentsOverlappingMomentShare:(id)arg1 inPhotoLibrary:(id)arg2;

@end
