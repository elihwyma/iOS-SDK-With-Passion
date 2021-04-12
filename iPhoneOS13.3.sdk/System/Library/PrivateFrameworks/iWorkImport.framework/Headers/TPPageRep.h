//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPPageRep.h>

#import <iWorkImport/TSDMasterDrawableDelegate-Protocol.h>
#import <iWorkImport/TSKChangeSourceObserver-Protocol.h>

@class CALayer, TPiOSMarginAdjustRep, TSDFill;

__attribute__((visibility("hidden")))
@interface TPPageRep : TSWPPageRep <TSKChangeSourceObserver, TSDMasterDrawableDelegate>
{
    CALayer *_horizontalSeparatorLayer;
    CALayer *_verticalSeparatorLayer;
    BOOL _backgroundFillRequiresLayerUpdate;
    BOOL _fillCanApplyToCALayer;
    TPiOSMarginAdjustRep *_marginAdjustRep;
    TSDFill *_cachedBackgroundFill;
}

@property(retain, nonatomic) TSDFill *cachedBackgroundFill; // @synthesize cachedBackgroundFill=_cachedBackgroundFill;
@property(readonly, nonatomic) TPiOSMarginAdjustRep *marginAdjustRep; // @synthesize marginAdjustRep=_marginAdjustRep;
// - (void).cxx_destruct;
- (id)parentRepForMagnification;
- (id)bodyReps;
- (BOOL)masksToBounds;
- (void)drawInContext:(CGContext )arg1;
- (BOOL)directlyManagesLayerContent;
- (BOOL)p_pageRequiresHorizontalSeparator;
- (BOOL)childRepIsMasterDrawable:(id)arg1;
- (BOOL)childRepIsOnDocSetupCanvas:(id)arg1;
- (void)willBeRemoved;
- (id)colorBehindBodyTextLayer:(id)arg1;
- (BOOL)isOpaque;
- (id)backgroundFill;
- (void)dealloc;

@end

