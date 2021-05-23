/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOMuninViewState, MKMapItem, VKMuninMarker;

@interface MKMuninEntryPoint : NSObject

{
    _Bool _wantsCloseUpView;
    int _triggerAction;
    unsigned long long _type;
    MKMapItem *_mapItem;
    VKMuninMarker *_muninMarker;
    double _heading;
    GEOMuninViewState *_muninViewState;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic) _Bool wantsCloseUpView;
@property (retain, nonatomic) VKMuninMarker *muninMarker;
@property (nonatomic) double heading;
@property (retain, nonatomic) GEOMuninViewState *muninViewState;
@property (nonatomic) int triggerAction;

+ (id)entryPointWithMapItem:(id)arg1 wantsCloseUpView:(_Bool)arg2 triggerAction:(int)arg3;
+ (id)entryPointWithMapItem:(id)arg1 wantsCloseUpView:(_Bool)arg2;
+ (id)entryPointWithMapItem:(id)arg1;
+ (id)entryPointWithMuninViewState:(id)arg1;
+ (id)entryPointWithMuninMarker:(id)arg1 heading:(double)arg2;
+ (id)entryPointWithMapItem:(id)arg1 triggerAction:(int)arg2;
+ (id)entryPointWithMuninViewState:(id)arg1 triggerAction:(int)arg2;

- (id)init;

@end
