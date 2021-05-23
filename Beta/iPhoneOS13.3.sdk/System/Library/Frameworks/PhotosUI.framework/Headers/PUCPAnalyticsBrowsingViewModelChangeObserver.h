/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUCPAnalyticsBrowsingViewModelChangeObserver : NSObject

{
    _Bool _isTracking;
    long long _viewTimeSignpostID;
    id <PUDisplayAsset> _lastObservedAsset;
}

@property (nonatomic) _Bool isTracking;
@property (nonatomic) long long viewTimeSignpostID;
@property (retain, nonatomic) id <PUDisplayAsset> lastObservedAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)stopTracking;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)startTracking;
- (void)_handleAssetUpdate:(id)arg1;
- (void)_endViewingAsset:(id)arg1;
- (void)_startViewingAsset:(id)arg1;

@end
