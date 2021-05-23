/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTitledImageBalloonView.h>

@class MKMarkerAnnotationView;

@interface CKMapBalloonView : CKTitledImageBalloonView

{
    MKMarkerAnnotationView *_annotationView;
}

@property (retain, nonatomic) MKMarkerAnnotationView *annotationView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
