/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@protocol PLAssetContainerList <Swift>

@property (nonatomic, readonly) unsigned long long containersCount;

- (unsigned short)isEmpty;
- (unsigned short)managedObjectContext;
- (unsigned short)photoLibrary;
- (unsigned short)containers;
- (unsigned short)canEditContainers;
- (unsigned short)containersRelationshipName;

@end
