/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKManifestTileGroupObserverProxy : NSObject

{
    function_6bb6aae3 _willChangeActiveTileGroup;
    function_391631e2 _didChangeActiveTileGroup;
    function_70614617 _experimentConfigurationDidChange;
}

@property function_6bb6aae3 willChangeActiveTileGroup;
@property function_391631e2 didChangeActiveTileGroup;
@property function_70614617 experimentConfigurationDidChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id).cxx_construct;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)experimentConfigurationDidChange:(id)arg1;

@end
