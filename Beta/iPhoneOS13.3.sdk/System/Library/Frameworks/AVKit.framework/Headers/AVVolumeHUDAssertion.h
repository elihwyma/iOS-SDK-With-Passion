/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVVolumeHUDAssertion : NSObject

{
    NSString *_clientIdentifier;
    NSString *_sceneIdentifier;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *sceneIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSceneIdentifier:(id)arg1 clientIdentifier:(id)arg2;

@end
