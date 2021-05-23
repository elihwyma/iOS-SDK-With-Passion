/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class UIView;

@protocol NSItemProviderWriting;

@interface _MKPlaceCardDraggableContent : NSObject

{
    _Bool _header;
    int _analyticsTarget;
    UIView *_view;
    id <NSItemProviderWriting> _draggableContent;
}

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) id <NSItemProviderWriting> draggableContent;
@property (nonatomic, getter=isHeader) _Bool header;
@property (nonatomic) int analyticsTarget;

@end
