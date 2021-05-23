/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <IMCore/IMBalloonPluginDataSource.h>

@class CKBalloonView, CKMediaObject;

__attribute__((visibility("hidden")))
@interface CKImageBalloonPluginDatasource : IMBalloonPluginDataSource

{
    CKBalloonView *_balloonView;
    CKMediaObject *_mediaObject;
}

@property (retain, nonatomic) CKBalloonView *balloonView;
@property (retain, nonatomic) CKMediaObject *mediaObject;

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithPluginPayload:(id)arg1;
- (void)previewDidChange:(id)arg1;
- (id)imageBalloon;

@end
