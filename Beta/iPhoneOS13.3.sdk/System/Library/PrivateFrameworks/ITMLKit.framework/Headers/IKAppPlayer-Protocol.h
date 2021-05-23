/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class IKAppDocument, IKAppPlayerBridge, NSArray, NSDate, NSDictionary, NSNumber;

@protocol IKAppMediaItem, IKAppPlaylist;

@protocol IKAppPlayer <Swift>

@property (nonatomic, readonly) IKAppPlayerBridge *bridge;
@property (nonatomic, readonly) long long state;
@property (retain, nonatomic) id <IKAppPlaylist> playlist;
@property (nonatomic, readonly) NSNumber *currentMediaItemDuration;
@property (nonatomic, readonly) NSDate *currentMediaItemDate;
@property (nonatomic, readonly) id <IKAppMediaItem> currentMediaItem;
@property (nonatomic, readonly) double scanRate;
@property (nonatomic) _Bool muted;
@property (nonatomic) _Bool showsResumeMenu;
@property (nonatomic, readonly) id <IKAppMediaItem> nextMediaItem;
@property (nonatomic, readonly) id <IKAppMediaItem> previousMediaItem;
@property (retain, nonatomic) IKAppDocument *overlayDocument;
@property (retain, nonatomic) IKAppDocument *interactiveOverlayDocument;
@property (nonatomic) _Bool interactiveOverlayDismissable;
@property (nonatomic, readonly) NSArray *currentMediaItemAccessLogs;
@property (nonatomic, readonly) NSArray *currentMediaItemErrorLogs;
@property (copy, nonatomic) NSDictionary *contextMenuData;
@property (copy, nonatomic) NSDictionary *userInfo;

- (unsigned short)pause;
- (unsigned short)stop;
- (unsigned short)next;
- (unsigned short)previous;
- (unsigned short)cleanup;
- (unsigned short)play;
- (unsigned short)present;
- (unsigned short)scan: /* Error: Ran out of types for this method. */;
- (unsigned short)setElapsedTime: /* Error: Ran out of types for this method. */;
- (unsigned short)startObservingEvent:extraInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)changeToMediaAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)stopObservingEvent: /* Error: Ran out of types for this method. */;

@end
