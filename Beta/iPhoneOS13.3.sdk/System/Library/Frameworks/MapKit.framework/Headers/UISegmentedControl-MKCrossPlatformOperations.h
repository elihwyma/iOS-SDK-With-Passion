/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UISegmentedControl.h>

@interface UISegmentedControl (MKCrossPlatformOperations)

- (long long)_mapkit_numberOfSegments;
- (long long)_mapkit_selectedSegmentIndex;
- (void)_mapkit_setSelectedSegmentIndex:(long long)arg1;
- (void)_mapkit_removeAllSegments;
- (void)_mapkit_setTitle:(id)arg1 forSegmentAtIndex:(long long)arg2 insertIfNeeded:(_Bool)arg3;

@end
