/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSURL, _SBStatusBarTapApplicationDestination;

@interface _SBStatusBarTapHandler : NSObject

{
    NSURL *_url;
    CDUnknownBlockType _block;
    _SBStatusBarTapApplicationDestination *_appDestination;
    _SBStatusBarTapApplicationDestination *_applicationDestination;
}

@property (copy, nonatomic, readonly) _SBStatusBarTapApplicationDestination *applicationDestination;
@property (nonatomic, readonly) _Bool canRequestUnlock;

- (id)initWithURL:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)handleTap;
- (id)initWithApplicationDestination:(id)arg1;

@end
