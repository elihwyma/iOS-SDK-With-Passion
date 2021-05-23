/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@interface MPPlayableContentManagerContext : NSObject

{
    _Bool _contentLimitsEnforced;
    _Bool _endpointAvailable;
    long long _enforcedContentItemsCount;
    long long _enforcedContentTreeDepth;
}

@property (nonatomic) long long enforcedContentItemsCount;
@property (nonatomic) long long enforcedContentTreeDepth;
@property (nonatomic) _Bool contentLimitsEnforced;
@property (nonatomic) _Bool endpointAvailable;
@property (nonatomic, readonly) _Bool contentLimitsEnabled;

@end
