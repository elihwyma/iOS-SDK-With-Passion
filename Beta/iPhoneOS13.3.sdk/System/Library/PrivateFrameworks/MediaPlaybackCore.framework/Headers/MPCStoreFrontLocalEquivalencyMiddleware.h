/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPModelGenericObject, NSArray, NSIndexPath, NSString;

@interface MPCStoreFrontLocalEquivalencyMiddleware : NSObject

{
    NSArray *_invalidationObservers;
    MPModelGenericObject *_overridePlayingItem;
    NSIndexPath *_playingItemIndexPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) MPModelGenericObject *overridePlayingItem;
@property (copy, nonatomic) NSIndexPath *playingItemIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSArray *invalidationObservers;

- (id)_stateDumpObject;
- (id)operationsForRequest:(id)arg1;
- (id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4;
- (id)operationsForPlayerRequest:(id)arg1;

@end
