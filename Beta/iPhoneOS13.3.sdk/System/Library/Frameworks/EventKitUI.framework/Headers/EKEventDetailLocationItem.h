/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKTextViewWithLabelTextMetrics, NSString, NSURL, UITapGestureRecognizer;

@interface EKEventDetailLocationItem : NSObject

{
    EKTextViewWithLabelTextMetrics *_locationView;
    NSURL *_locationURL;
    UITapGestureRecognizer *_locationTapRecognizer;
    long long _locationStatus;
    _Bool _hasMapItemLaunchOptionFromTimeToLeaveNotification;
    _Bool _hasLocationStatus;
    NSString *_locationTitle;
}

@property _Bool hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property _Bool hasLocationStatus;
@property (retain) NSString *locationTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)textViewDidChangeSelection:(id)arg1;
- (void)updateLocation:(id)arg1 forEvent:(id)arg2;
- (id)locationView;
- (void)_locationTapped;
- (id)initWithLocationName:(id)arg1 forEvent:(id)arg2;

@end
