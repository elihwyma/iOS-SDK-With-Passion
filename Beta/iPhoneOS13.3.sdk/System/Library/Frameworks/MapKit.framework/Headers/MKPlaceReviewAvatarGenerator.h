/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class CNAvatarImageRenderer, NSMutableDictionary;

@protocol MKInfoCardTheme, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MKPlaceReviewAvatarGenerator : NSObject

{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_cachedMaskedImages;
    id <MKInfoCardTheme> _theme;
    CNAvatarImageRenderer *_monogrammer;
}

@property (retain, nonatomic) CNAvatarImageRenderer *monogrammer;
@property (weak, nonatomic) id <MKInfoCardTheme> theme;

- (id)init;
- (void)monogramForReviewerName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)avatarForReview:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
