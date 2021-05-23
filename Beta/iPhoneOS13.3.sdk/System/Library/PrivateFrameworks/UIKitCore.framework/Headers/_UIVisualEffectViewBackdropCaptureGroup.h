/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSPointerArray, NSString;

@interface _UIVisualEffectViewBackdropCaptureGroup : NSObject

{
    NSPointerArray *_backdrops;
    _Bool _disableInPlaceFiltering;
    NSString *_groupName;
    double _scale;
    double _minimumScale;
}

@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) double scale;
@property (nonatomic) double minimumScale;
@property (nonatomic) _Bool disableInPlaceFiltering;

- (id)init;
- (id)description;
- (_Bool)allowInPlaceFiltering;
- (long long)indexOfBackdropView:(id)arg1;
- (void)updateAllBackdropViews;
- (id)initWithBackdrop:(id)arg1;
- (void)addBackdrop:(id)arg1 update:(_Bool)arg2;
- (void)removeBackdrop:(id)arg1 update:(_Bool)arg2;
- (void)applyScaleHint:(double)arg1;

@end
