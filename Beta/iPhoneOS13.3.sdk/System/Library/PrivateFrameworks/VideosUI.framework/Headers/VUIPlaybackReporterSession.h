/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol TVPPlayback;

__attribute__((visibility("hidden")))
@interface VUIPlaybackReporterSession : NSObject

{
    NSMutableDictionary *_metadata;
    struct os_unfair_lock_s _metadataLock;
    _Bool _reportingEnabled;
    NSObject<TVPPlayback> *_player;
    NSString *_UUID;
    id _context;
}

@property (weak, nonatomic) NSObject<TVPPlayback> *player;
@property (retain, nonatomic) id context;
@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic) _Bool reportingEnabled;

+ (id)transitionTypeForMediaControllerAutoStart:(id)arg1;
+ (id)transitionReasonForMediaControllerStartReason:(id)arg1 autoStart:(id)arg2;
+ (id)transitionReasonForMediaControllerStopReason:(id)arg1 autoStart:(id)arg2;

- (id)description;
- (id)consumeMetadataForKey:(id)arg1;
- (id)consumeStopType;
- (id)consumeStopReason;
- (id)consumeStartType;
- (id)consumeStartReason;
- (id)initWithPlayer:(id)arg1 context:(id)arg2;
- (void)setMetadata:(id)arg1 forKey:(id)arg2;
- (id)metadataForKey:(id)arg1;

@end
