/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/Swift-Protocol.h>

@protocol NULoadingDelegate;

@protocol NULoadable <Swift>

@property (weak, nonatomic) id <NULoadingDelegate> loadingDelegate;

@end
