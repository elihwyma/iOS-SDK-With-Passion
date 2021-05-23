/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSValue, PLManagedAsset;

@interface PLManagedLegacyFace : PLManagedObject

@property (retain, nonatomic) NSValue *relativeRectValue;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (nonatomic) struct CGRect relativeRect;
@property (nonatomic) short identifier;
@property (retain, nonatomic) NSString *albumUUID;

+ (id)entityName;

- (void)delete;

@end
