/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIActivityViewController.h>

@class MKMapItem, NSString;

@protocol MKActivityViewControllerDelegate;

@interface MKActivityViewController : UIActivityViewController

{
    MKMapItem *_mapItem;
    id <MKActivityViewControllerDelegate> _activityControllerDelegate;
}

@property (weak, nonatomic) id <MKActivityViewControllerDelegate> activityControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (CDUnknownBlockType)_completionHandler;
- (CDUnknownBlockType)_activityHandler;
- (id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3 activityProviderDelegate:(id)arg4;
- (id)initWithShareItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3;
- (id)initWithSource:(id)arg1 destination:(id)arg2 composedRoute:(id)arg3 applicationActivities:(id)arg4 routeProviderDelegate:(id)arg5;
- (id)initWithMapItem:(id)arg1 muninViewState:(id)arg2 activityProviderDelegate:(id)arg3;
- (id)initWithActivityItems:(id)arg1;

@end
