/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface SXIssueCoverPresentationOptions : NSObject

{
    _Bool _videoPlaybackEnabled;
    UIColor *_parentBackgroundColor;
    struct CGSize _size;
}

@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) _Bool videoPlaybackEnabled;
@property (nonatomic, readonly) UIColor *parentBackgroundColor;

- (id)initWithSize:(struct CGSize)arg1 videoPlaybackEnabled:(_Bool)arg2 parentBackgroundColor:(id)arg3;

@end
