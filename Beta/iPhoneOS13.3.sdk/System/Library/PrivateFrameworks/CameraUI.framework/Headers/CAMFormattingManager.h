/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMFormattingManager : NSObject

{
    _Bool _wantsCustomKerning;
    _Bool _supportsVerticalText;
}

@property (nonatomic, readonly) _Bool wantsCustomKerning;
@property (nonatomic, readonly) _Bool supportsVerticalText;

+ (id)sharedManager;

- (id)init;
- (void)_commonCAMFormattingManagerInitialization;

@end
