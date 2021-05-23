/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTEventHandlers.h>

@class MTBaseEventDataProvider, MTMediaActivityEventHandler;

@interface MTVPAFEventHandlers : MTEventHandlers

{
    MTBaseEventDataProvider *_base;
    MTMediaActivityEventHandler *_playStart;
    MTMediaActivityEventHandler *_playStop;
    MTMediaActivityEventHandler *_seekStart;
    MTMediaActivityEventHandler *_seekStop;
}

@property (nonatomic, readonly) MTMediaActivityEventHandler *playStart;
@property (nonatomic, readonly) MTMediaActivityEventHandler *playStop;
@property (nonatomic, readonly) MTMediaActivityEventHandler *seekStart;
@property (nonatomic, readonly) MTMediaActivityEventHandler *seekStop;

- (void)setBase:(id)arg1;
- (id)base;

@end
