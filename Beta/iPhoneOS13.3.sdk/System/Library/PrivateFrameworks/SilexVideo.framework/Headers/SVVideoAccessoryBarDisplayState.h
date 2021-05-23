/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class SVVideoAccessoryBarItemDisplayState;

@interface SVVideoAccessoryBarDisplayState : NSObject

{
    SVVideoAccessoryBarItemDisplayState *_leadingState;
    SVVideoAccessoryBarItemDisplayState *_trailingState;
}

@property (nonatomic, readonly) SVVideoAccessoryBarItemDisplayState *leadingState;
@property (nonatomic, readonly) SVVideoAccessoryBarItemDisplayState *trailingState;

- (_Bool)isEqual:(id)arg1;
- (id)initWithLeadingState:(id)arg1 trailingState:(id)arg2;

@end
