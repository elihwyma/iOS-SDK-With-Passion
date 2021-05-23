/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAVErrorResolver.h>

@class NSNumber;

@interface MPStorePurchaseErrorResolver : MPAVErrorResolver

{
    NSNumber *_storeAccountIdentifier;
}

@property (copy, nonatomic, readonly) NSNumber *storeAccountIdentifier;

- (void)resolveError:(id)arg1;
- (id)initWithStoreAccountIdentifier:(id)arg1;

@end
