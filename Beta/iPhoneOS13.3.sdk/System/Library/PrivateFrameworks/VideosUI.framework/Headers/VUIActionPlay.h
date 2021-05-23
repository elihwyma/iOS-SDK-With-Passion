/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAction.h>

@class IKAppContext, NSArray, NSDate, NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIActionPlay : VUIAction

{
    _Bool _upNextPlayback;
    NSDictionary *_contextData;
    NSArray *_videosPlayables;
    IKAppContext *_appContext;
    NSDate *_userPlaybackInitiationDate;
    NSDate *_openURLCompletionDate;
}

@property (retain, nonatomic) NSDictionary *contextData;
@property (retain, nonatomic) NSArray *videosPlayables;
@property (weak, nonatomic) IKAppContext *appContext;
@property (nonatomic, getter=isUpNextPlayback) _Bool upNextPlayback;
@property (retain, nonatomic) NSDate *userPlaybackInitiationDate;
@property (retain, nonatomic) NSDate *openURLCompletionDate;

+ (void)playMediaInfo:(id)arg1 isRentAndWatchNow:(_Bool)arg2;
+ (void)_playPlayables:(id)arg1 storeDictionary:(id)arg2 appContext:(id)arg3 isUpNextPlayback:(_Bool)arg4 userPlaybackInitiationDate:(id)arg5 openURLCompletionDate:(id)arg6;
+ (void)_playMediaInfo:(id)arg1 extrasInfo:(id)arg2 isRentAndWatchNow:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_presentPlaybackWithMediaInfo:(id)arg1 extrasInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_preflightWithMediaInfo:(id)arg1 isRentAndWatchNow:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

- (_Bool)isAccountRequired;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;

@end
