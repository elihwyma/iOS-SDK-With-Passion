/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPAVItem, MPTimeMarker;

@interface MPAVItemTimeMarkerEvent : NSObject

{
    MPAVItem *_AVItem;
    MPTimeMarker *_chapterMarker;
    MPTimeMarker *_artworkMarker;
    MPTimeMarker *_URLMarker;
    MPTimeMarker *_closedCaptionMarker;
}

@property (retain, nonatomic) MPAVItem *AVItem;
@property (retain, nonatomic) MPTimeMarker *chapterMarker;
@property (retain, nonatomic) MPTimeMarker *artworkMarker;
@property (retain, nonatomic) MPTimeMarker *URLMarker;
@property (retain, nonatomic) MPTimeMarker *closedCaptionMarker;

- (id)initWithTimeMarkerNotificationUserInfo:(id)arg1;
- (id)crossedMarkerOfType:(long long)arg1;

@end
