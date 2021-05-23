/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet, NSString, PHPhotoLibrary;

@interface PGPhotosHighlightItemModelManager : NSObject

{
    unsigned short _kind;
    PHPhotoLibrary *_library;
    NSMutableDictionary *_visibilityStateByDayHighlighItemUUID;
}

@property (nonatomic, readonly) PHPhotoLibrary *library;
@property (nonatomic, readonly) unsigned short kind;
@property (nonatomic, readonly) NSMutableDictionary *visibilityStateByDayHighlighItemUUID;
@property (nonatomic, readonly) NSSet *highlightUUIDsWithVisibilityStateChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)fetchChildHighlightItemsForHighlightItem:(id)arg1;
- (id)fetchParentHighlightItemsForHighlightItems:(id)arg1;
- (id)consumeHighlightItemList:(id)arg1;
- (void)setVisibilityState:(unsigned short)arg1 forHighlightItem:(id)arg2;
- (unsigned short)visibilityStateForHighlightItem:(id)arg1;
- (id)initWithLibrary:(id)arg1 forKind:(unsigned short)arg2;
- (void)addVisibleHighlight:(id)arg1 inMonth:(id)arg2;

@end
