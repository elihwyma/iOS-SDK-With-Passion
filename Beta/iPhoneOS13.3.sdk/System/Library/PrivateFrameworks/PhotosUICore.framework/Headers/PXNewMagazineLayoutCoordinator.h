/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, PXNewMagazineRectArray;

@interface PXNewMagazineLayoutCoordinator : NSObject

{
    PXNewMagazineRectArray *_fallbackLayout;
    double _currentBestScore;
    _Bool _stopIfAnyGoodLayout;
    _Bool _stop;
    NSArray *_paddingInputs;
    double _tileAspectRatio;
    NSMutableArray *_qualifiedLayouts;
    PXNewMagazineRectArray *_currentLayout;
    unsigned long long _currentIndex;
}

@property (nonatomic, readonly) NSArray *paddingInputs;
@property (nonatomic, readonly) double tileAspectRatio;
@property (nonatomic, readonly) _Bool stopIfAnyGoodLayout;
@property (nonatomic, readonly) unsigned long long currentLayoutsCount;
@property (nonatomic, readonly) PXNewMagazineRectArray *currentBestLayout;
@property (retain, nonatomic) NSMutableArray *qualifiedLayouts;
@property (retain, nonatomic) PXNewMagazineRectArray *currentLayout;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic) _Bool stop;

- (id)initWithPaddingInputs:(id)arg1 tileGrid:(id)arg2 tileAspectRatio:(double)arg3 stopIfAnyGoodLayout:(_Bool)arg4;
- (_Bool)validateCurrentLayout;
- (void)validateCurrentLayoutAsFallback;
- (double)scoreOfLayout:(id)arg1;

@end
