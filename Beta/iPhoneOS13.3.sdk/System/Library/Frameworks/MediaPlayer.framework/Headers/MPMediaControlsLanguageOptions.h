/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MPMediaControlsLanguageOptions : NSObject

{
    NSString *_routeUID;
    struct CGPoint _center;
}

- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithRouteUID:(id)arg1 atCenter:(struct CGPoint)arg2;

@end
