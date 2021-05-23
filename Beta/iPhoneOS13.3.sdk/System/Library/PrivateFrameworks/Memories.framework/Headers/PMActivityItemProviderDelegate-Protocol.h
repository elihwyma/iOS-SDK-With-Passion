/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/Swift-Protocol.h>

@class UIViewController;

@protocol PMActivityItemProviderDelegate <Swift>

@property (weak, nonatomic) UIViewController *presenter;

- (unsigned short)cancel;
- (unsigned short)exportFailed;
- (unsigned short)exportWillBegin;

@end
