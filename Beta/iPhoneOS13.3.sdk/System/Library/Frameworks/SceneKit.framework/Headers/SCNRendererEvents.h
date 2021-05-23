/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@protocol MTLEvent;

@interface SCNRendererEvents : NSObject

{
    id <MTLEvent> _waitEvent;
    unsigned long long _waitFrame;
    id <MTLEvent> _signalEvent;
    unsigned long long _signalFrame;
}

@property (retain, nonatomic) id <MTLEvent> waitEvent;
@property (nonatomic) unsigned long long waitFrame;
@property (retain, nonatomic) id <MTLEvent> signalEvent;
@property (nonatomic) unsigned long long signalFrame;

- (void)dealloc;
- (void)waitBeforeSubmittingRender:(id)arg1;
- (void)signalAfterSubmittingRender:(id)arg1;

@end
