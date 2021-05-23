/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol AVTUILogger;

@interface AVTUIStickerGeneratorPool : NSObject

{
    long long _maxCount;
    NSMutableDictionary *_availableStickerGenerators;
    NSMutableDictionary *_inUseStickerGenerators;
    id <AVTUILogger> _logger;
}

@property (nonatomic, readonly) long long maxCount;
@property (nonatomic, readonly) NSMutableDictionary *availableStickerGenerators;
@property (nonatomic, readonly) NSMutableDictionary *inUseStickerGenerators;
@property (nonatomic, readonly) id <AVTUILogger> logger;

- (void)flush;
- (id)avatarForRecord:(id)arg1;
- (id)initWithMaxStickerGeneratorCount:(long long)arg1 logger:(id)arg2;
- (void)flushGeneratorForRecord:(id)arg1;
- (id)generatorForAvatarRecord:(id)arg1 inGenerators:(id)arg2;
- (id)stealGeneratorForAvatarRecord:(id)arg1 inGenerators:(id)arg2 needAvatar:(_Bool)arg3;
- (id)dequeueStickerGeneratorForAvatarRecord:(id)arg1 needAvatar:(_Bool)arg2;
- (void)didStopUsingStickerGeneratorForRecord:(id)arg1;

@end
