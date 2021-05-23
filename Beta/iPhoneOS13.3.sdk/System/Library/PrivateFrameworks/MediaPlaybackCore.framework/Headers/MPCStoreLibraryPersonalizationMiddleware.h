/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPSectionedCollection, NSArray, NSString;

@interface MPCStoreLibraryPersonalizationMiddleware : NSObject

{
    NSArray *_invalidationObservers;
    MPSectionedCollection *_personalizedModelObjects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) MPSectionedCollection *personalizedModelObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSArray *invalidationObservers;

- (id)operationsForRequest:(id)arg1;
- (id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4;
- (id)operationsForPlayerRequest:(id)arg1;

@end
