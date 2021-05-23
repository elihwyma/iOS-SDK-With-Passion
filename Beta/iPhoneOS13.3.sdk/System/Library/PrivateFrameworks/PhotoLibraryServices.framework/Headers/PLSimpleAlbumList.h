/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSOrderedSet, NSString;

@interface PLSimpleAlbumList : NSObject <Swift>

{
    NSOrderedSet *_containers;
}

@property (retain, nonatomic) NSOrderedSet *containers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long containersCount;

- (_Bool)isEmpty;
- (id)managedObjectContext;
- (id)photoLibrary;
- (_Bool)canEditContainers;
- (id)containersRelationshipName;
- (id)initWithAssetContainer:(id)arg1;
- (id)initWithAssetContainers:(id)arg1;

@end
