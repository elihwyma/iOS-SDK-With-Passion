/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class CALayer, NSString;

@protocol HKGraphTileDrawingDelegate;

@interface HKGraphTile : NSObject

{
    _Bool _tileDisplayedSinceSetNeedsDisplay;
    id <HKGraphTileDrawingDelegate> _drawingDelegate;
    CALayer *_caLayer;
    long long _column;
}

@property (retain, nonatomic) CALayer *caLayer;
@property (nonatomic) long long column;
@property (weak, nonatomic) id <HKGraphTileDrawingDelegate> drawingDelegate;
@property (nonatomic) _Bool hidden;
@property (nonatomic, readonly) _Bool tileDisplayedSinceSetNeedsDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)setNeedsDisplay;
- (id)initWithParentView:(id)arg1;
- (void)configureTileWithScreenRect:(struct CGRect)arg1 column:(long long)arg2;

@end
