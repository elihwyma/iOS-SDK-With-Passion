/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSOrderedSet, NSString;

@interface PXFeedAssetContainerList : NSObject

{
    NSString *_transientIdentifier;
    NSOrderedSet *_sectionInfos;
}

@property (copy, nonatomic) NSOrderedSet *sectionInfos;
@property (nonatomic, readonly) NSString *transientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long containersCount;

- (_Bool)isEqual:(id)arg1;
- (_Bool)isEmpty;
- (id)managedObjectContext;
- (id)photoLibrary;
- (id)containers;
- (_Bool)canEditContainers;
- (id)containersRelationshipName;

@end
