/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

#import <AVKit/Swift-Protocol.h>

@class AVPlayerViewController, NSString;

__attribute__((visibility("hidden")))
@interface AVDefaultBehaviorContext : NSObject <Swift>

{
    AVPlayerViewController *_playerViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) AVPlayerViewController *playerViewController;

- (id)initWithAVKitOwner:(id)arg1;

@end
