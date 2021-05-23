/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, PLDetectedFace;

@interface PLDetectedFaceprint : PLManagedObject

@property (retain, nonatomic) PLDetectedFace *face;
@property (nonatomic) int faceprintVersion;
@property (retain, nonatomic) NSData *data;

+ (id)entityName;

@end
