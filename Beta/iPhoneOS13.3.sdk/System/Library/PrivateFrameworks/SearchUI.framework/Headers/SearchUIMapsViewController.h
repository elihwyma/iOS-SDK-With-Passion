/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <MapKit/_MKPlaceViewController.h>

@class NSString;

@protocol SFFeedbackListener;

@interface SearchUIMapsViewController : _MKPlaceViewController

{
    id <SFFeedbackListener> _feedbackListener;
    unsigned long long _queryId;
}

@property (weak) id <SFFeedbackListener> feedbackListener;
@property (readonly) unsigned long long queryId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2;
- (id)initWithMapsData:(id)arg1 feedbackListener:(id)arg2 queryId:(unsigned long long)arg3;

@end
