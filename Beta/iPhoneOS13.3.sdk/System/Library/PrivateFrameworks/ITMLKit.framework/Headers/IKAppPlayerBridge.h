/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppContext, IKAppMediaItemBridge, IKAppPlaylistBridge, IKDOMDocument, IKJSPlayer, NSArray, NSDate, NSDictionary, NSNumber, NSString, _IKPlaceholderAppPlayer;

@protocol IKAppPlayer;

@interface IKAppPlayerBridge : NSObject

{
    _IKPlaceholderAppPlayer *_placeholderAppPlayer;
    _Bool _interactiveOverlayDismissable;
    _Bool _muted;
    _Bool _showsResumeMenu;
    IKAppContext *_appContext;
    NSString *_featureName;
    IKAppPlaylistBridge *_playlist;
    id <IKAppPlayer> _appPlayer;
    IKJSPlayer *_jsPlayer;
    IKDOMDocument *_overlayDocument;
    IKDOMDocument *_interactiveOverlayDocument;
    NSDictionary *_contextMenuData;
    NSDictionary *_userInfo;
}

@property (weak, nonatomic) IKJSPlayer *jsPlayer;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSNumber *currentMediaItemDuration;
@property (nonatomic, readonly) NSDate *currentMediaItemDate;
@property (nonatomic, readonly) IKAppMediaItemBridge *currentMediaItem;
@property (nonatomic, readonly) IKAppMediaItemBridge *nextMediaItem;
@property (nonatomic, readonly) IKAppMediaItemBridge *previousMediaItem;
@property (retain, nonatomic) IKAppPlaylistBridge *playlist;
@property (retain, nonatomic) IKDOMDocument *overlayDocument;
@property (retain, nonatomic) IKDOMDocument *interactiveOverlayDocument;
@property (nonatomic) _Bool interactiveOverlayDismissable;
@property (nonatomic, readonly) double scanRate;
@property (nonatomic, readonly) NSArray *currentMediaItemAccessLogs;
@property (nonatomic, readonly) NSArray *currentMediaItemErrorLogs;
@property (nonatomic) _Bool muted;
@property (copy, nonatomic) NSDictionary *contextMenuData;
@property (nonatomic) _Bool showsResumeMenu;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (weak, nonatomic) id <IKAppPlayer> appPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *featureName;
@property (weak, nonatomic, readonly) IKAppContext *appContext;

+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (void)pause;
- (void)stop;
- (void)next;
- (void)previous;
- (void)cleanup;
- (void)play;
- (void)present;
- (void)scan:(double)arg1;
- (void)setElapsedTime:(double)arg1;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (void)startObservingEvent:(id)arg1 extraInfo:(id)arg2;
- (void)changeToMediaAtIndex:(unsigned long long)arg1;
- (void)stopObservingEvent:(id)arg1;
- (id)initWithAppContext:(id)arg1 jsPlayer:(id)arg2;
- (void)_evaluateDelegateBlockSync:(CDUnknownBlockType)arg1;
- (void)dispatchEvent:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
