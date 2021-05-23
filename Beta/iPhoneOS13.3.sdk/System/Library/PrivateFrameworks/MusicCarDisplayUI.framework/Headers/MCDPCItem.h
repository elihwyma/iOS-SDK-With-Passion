/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <Foundation/NSObject.h>

@class MCDPCModel, NSData, NSString, UIImage;

@interface MCDPCItem : NSObject

{
    void *_contentItem;
    _Bool _currentlyPlaying;
    UIImage *_artworkImage;
    MCDPCModel *_model;
}

@property (weak, nonatomic, readonly) MCDPCModel *model;
@property (nonatomic) void *contentItem;
@property (nonatomic) _Bool currentlyPlaying;
@property (retain, nonatomic) UIImage *artworkImage;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSData *artworkData;
@property (nonatomic, readonly) float playbackProgress;
@property (nonatomic, readonly) _Bool isPlayable;
@property (nonatomic, readonly) _Bool isContainer;
@property (nonatomic, readonly) _Bool isCloudItem;
@property (nonatomic, readonly) _Bool isExplicitItem;

- (void)dealloc;
- (id)description;
- (id)_initWithModel:(id)arg1 MRContentItem:(void *)arg2;

@end
