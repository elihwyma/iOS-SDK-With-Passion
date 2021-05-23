/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class IKLockupElement, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface VideosExtrasVideoTimelineEvent : NSObject

{
    IKLockupElement *_lockup;
    UIImage *_image;
    _Bool _isFirstEvent;
    double _offset;
    double _duration;
    VideosExtrasVideoTimelineEvent *_previous;
    VideosExtrasVideoTimelineEvent *_next;
}

@property (weak, nonatomic) VideosExtrasVideoTimelineEvent *next;
@property (nonatomic) _Bool isFirstEvent;
@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subHeader;
@property (weak, nonatomic, readonly) VideosExtrasVideoTimelineEvent *previous;

- (id)description;
- (void)loadImage:(CDUnknownBlockType)arg1;
- (id)initWithElement:(id)arg1 prev:(id)arg2;

@end
