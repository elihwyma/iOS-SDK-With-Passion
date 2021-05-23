/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPModelRequest, NSArray, NSString;

@interface MPModelLibrarySearchSectionedCollectionDataSource : NSObject

{
    NSArray *_resultContainers;
    MPModelRequest *_request;
}

@property (copy, nonatomic, readonly) NSArray *resultContainers;
@property (retain, nonatomic) MPModelRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)initWithEntitiesQueryResultContainers:(id)arg1;

@end
