/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppDocument, IKAppPlayerBridge, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@protocol IKAppMediaItem, IKAppPlaylist;

@interface _IKPlaceholderAppPlayer : NSObject

{
    NSMutableDictionary *_eventExtraInfoByEvent;
    _Bool muted;
    _Bool showsResumeMenu;
    _Bool interactiveOverlayDismissable;
    IKAppPlayerBridge *bridge;
    long long state;
    id <IKAppPlaylist> playlist;
    NSNumber *currentMediaItemDuration;
    NSDate *currentMediaItemDate;
    id <IKAppMediaItem> currentMediaItem;
    double scanRate;
    id <IKAppMediaItem> nextMediaItem;
    id <IKAppMediaItem> previousMediaItem;
    IKAppDocument *overlayDocument;
    IKAppDocument *interactiveOverlayDocument;
    NSArray *currentMediaItemAccessLogs;
    NSArray *currentMediaItemErrorLogs;
    NSDictionary *contextMenuData;
    NSDictionary *userInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

- (void)pause;
- (void)stop;
- (void)next;
- (void)previous;
- (void)cleanup;
- (void)play;
- (void)present;
- (void)scan:(double)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)startObservingEvent:(id)arg1 extraInfo:(id)arg2;
- (void)changeToMediaAtIndex:(long long)arg1;
- (void)stopObservingEvent:(id)arg1;
- (void)transferValuesToAppPlayer:(id)arg1;

@end
