/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKStackingViewController.h>

@class MKMapItem, NSMutableDictionary;

@interface MKLayoutCardViewController : MKStackingViewController

{
    MKMapItem *_mapItem;
    NSMutableDictionary *_cacheVC;
    NSMutableDictionary *_cacheModuleType;
}

@property (retain, nonatomic) NSMutableDictionary *cacheVC;
@property (retain, nonatomic) NSMutableDictionary *cacheModuleType;
@property (retain, nonatomic) MKMapItem *mapItem;

- (_Bool)isLayoutDynamic;
- (void)_createModuleLayout:(id)arg1;
- (_Bool)isTransitItem;
- (struct UIViewController *)_createViewControllerForModule:(id)arg1;
- (id)_layoutModuleForMapItem;
- (struct UIViewController *)_cachedViewControllerForModule:(int)arg1;

@end
