/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXViewport;

@protocol SXMediaPlaybackDelegate;

@interface SXMediaPlaybackController : NSObject

{
    id <SXMediaPlaybackDelegate> _mediaPlaybackDelegate;
    SXViewport *_viewport;
}

@property (weak, nonatomic) id <SXMediaPlaybackDelegate> mediaPlaybackDelegate;
@property (nonatomic, readonly) SXViewport *viewport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithViewport:(id)arg1;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)registerMediaPlayBack:(id)arg1;

@end
