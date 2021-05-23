/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class IKDOMDocument, IKJSMediaItem, IKJSPlaylist, NSArray, NSDate, NSDictionary, NSNumber, NSString;

@protocol IKJSPlayer <Swift>

@property (nonatomic, readonly) NSString *playbackState;
@property (retain, nonatomic) IKJSPlaylist *playlist;
@property (nonatomic, readonly) IKJSMediaItem *currentMediaItem;
@property (nonatomic, readonly) IKJSMediaItem *nextMediaItem;
@property (nonatomic, readonly) IKJSMediaItem *previousMediaItem;
@property (nonatomic, readonly) NSNumber *currentMediaItemDuration;
@property (nonatomic, readonly) NSDate *currentMediaItemDate;
@property (nonatomic) double playbackRate;
@property (nonatomic) _Bool muted;
@property (retain, nonatomic) IKDOMDocument *overlayDocument;
@property (retain, nonatomic) IKDOMDocument *interactiveOverlayDocument;
@property (nonatomic) _Bool interactiveOverlayDismissable;
@property (nonatomic, readonly) NSArray *currentMediaItemAccessLogs;
@property (nonatomic, readonly) NSArray *currentMediaItemErrorLogs;
@property (copy, nonatomic) NSDictionary *contextMenuData;
@property (nonatomic) _Bool showsResumeMenu;
@property (retain, nonatomic) NSDictionary *userInfo;

- (unsigned short)init;
- (unsigned short)pause;
- (unsigned short)stop;
- (unsigned short)next;
- (unsigned short)previous;
- (unsigned short)play;
- (unsigned short)present;
- (unsigned short)seekToTime: /* Error: Ran out of types for this method. */;
- (unsigned short)changeToMediaAtIndex: /* Error: Ran out of types for this method. */;

@end
