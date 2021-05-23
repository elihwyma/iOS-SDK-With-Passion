/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@protocol AVTTransitionModel;

@protocol AVTTransition <Swift>

@property (nonatomic) long long state;
@property (nonatomic) _Bool animated;
@property (nonatomic, readonly) id <AVTTransitionModel> model;
@property (copy, nonatomic) CDUnknownBlockType setupHandler;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (unsigned short)cancel;
- (unsigned short)start;

@end
