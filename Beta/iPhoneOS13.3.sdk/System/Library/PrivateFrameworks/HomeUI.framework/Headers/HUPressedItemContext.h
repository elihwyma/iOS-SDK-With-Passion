/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HFItem, HUElasticApplier, NSTimer;

@interface HUPressedItemContext : NSObject

{
    _Bool _active;
    _Bool _isUserInitiated;
    HFItem *_item;
    HUElasticApplier *_applier;
    double _beginTime;
    double _rawInputProgress;
    double _currentViewScale;
    NSTimer *_programmaticBounceTimer;
}

@property (retain, nonatomic) HFItem *item;
@property (retain, nonatomic) HUElasticApplier *applier;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic) double beginTime;
@property (nonatomic) double rawInputProgress;
@property (nonatomic) double currentViewScale;
@property (nonatomic) _Bool isUserInitiated;
@property (retain, nonatomic) NSTimer *programmaticBounceTimer;

@end
