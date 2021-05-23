/*
 Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

#import <UIKit/UIAlertController.h>

@class MPAVItem, NSError;

@interface MPUPlaybackAlertController : UIAlertController

{
    long long _playbackAlertType;
    MPAVItem *_item;
    NSError *_error;
}

@property (nonatomic, readonly) long long playbackAlertType;
@property (nonatomic, readonly) MPAVItem *item;
@property (nonatomic, readonly) NSError *error;

+ (long long)playbackAlertTypeForError:(id)arg1;
+ (id)contentRestrictedPlaybackAlertControllerForContentType:(long long)arg1 dismissalBlock:(CDUnknownBlockType)arg2;
+ (id)genericAlertControllerForItem:(id)arg1 error:(id)arg2 dismissalBlock:(CDUnknownBlockType)arg3;
+ (id)userRemovedAlertControllerForItem:(id)arg1 dismissalBlock:(CDUnknownBlockType)arg2;
+ (id)playbackAlertControllerForItem:(id)arg1 contentType:(long long)arg2 error:(id)arg3 dismissalBlock:(CDUnknownBlockType)arg4;

@end
