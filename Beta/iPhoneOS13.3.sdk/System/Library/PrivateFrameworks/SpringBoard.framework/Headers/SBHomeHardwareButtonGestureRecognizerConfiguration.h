/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBSystemGestureManager, UIHBClickGestureRecognizer, UIHBLongClickGestureRecognizer;

@interface SBHomeHardwareButtonGestureRecognizerConfiguration : NSObject

{
    SBSystemGestureManager *_systemGestureManager;
    UIHBClickGestureRecognizer *_initialButtonDownGestureRecognizer;
    UIHBClickGestureRecognizer *_initialButtonUpGestureRecognizer;
    UIHBClickGestureRecognizer *_singlePressUpGestureRecognizer;
    UIHBClickGestureRecognizer *_acceleratedSinglePressUpGestureRecognizer;
    UIHBLongClickGestureRecognizer *_longPressGestureRecognizer;
    UIHBClickGestureRecognizer *_doublePressDownGestureRecognizer;
    UIHBClickGestureRecognizer *_doublePressUpGestureRecognizer;
    UIHBClickGestureRecognizer *_triplePressUpGestureRecognizer;
    UIHBClickGestureRecognizer *_doubleTapUpGestureRecognizer;
}

@property (retain, nonatomic) SBSystemGestureManager *systemGestureManager;
@property (retain, nonatomic) UIHBClickGestureRecognizer *initialButtonDownGestureRecognizer;
@property (retain, nonatomic) UIHBClickGestureRecognizer *initialButtonUpGestureRecognizer;
@property (retain, nonatomic) UIHBClickGestureRecognizer *singlePressUpGestureRecognizer;
@property (retain, nonatomic) UIHBClickGestureRecognizer *acceleratedSinglePressUpGestureRecognizer;
@property (retain, nonatomic) UIHBLongClickGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) UIHBClickGestureRecognizer *doublePressDownGestureRecognizer;
@property (retain, nonatomic) UIHBClickGestureRecognizer *doublePressUpGestureRecognizer;
@property (retain, nonatomic) UIHBClickGestureRecognizer *triplePressUpGestureRecognizer;
@property (retain, nonatomic) UIHBClickGestureRecognizer *doubleTapUpGestureRecognizer;
@property (nonatomic, readonly) _Bool shouldConfigureDependencies;

@end
