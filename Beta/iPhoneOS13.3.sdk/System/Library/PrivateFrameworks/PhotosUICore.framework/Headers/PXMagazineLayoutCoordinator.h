/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, PXMagazineRectArray;

@interface PXMagazineLayoutCoordinator : NSObject

{
    PXMagazineRectArray *_fallbackLayout;
    double _currentBestScore;
    _Bool _stopIfAnyGoodLayout;
    _Bool _stop;
    NSArray *_paddingInputs;
    double _tileAspectRatio;
    NSMutableArray *_qualifiedLayouts;
    PXMagazineRectArray *_currentLayout;
    unsigned long long _currentIndex;
}

@property (nonatomic, readonly) NSArray *paddingInputs;
@property (nonatomic, readonly) double tileAspectRatio;
@property (nonatomic, readonly) _Bool stopIfAnyGoodLayout;
@property (retain, nonatomic) NSMutableArray *qualifiedLayouts;
@property (retain, nonatomic) PXMagazineRectArray *currentLayout;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic) _Bool stop;

- (_Bool)validateCurrentLayout;
- (void)validateCurrentLayoutAsFallback;
- (double)scoreOfLayout:(id)arg1;
- (unsigned long long)currentLayoutsCount;
- (id)currentBestLayout;
- (id)initWithPaddingInputs:(id)arg1 tileAspectRatio:(double)arg2 stopIfAnyGoodLayout:(_Bool)arg3;

@end
