/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSError;

@interface SUPlayerStatus : NSObject

{
    double _currentTime;
    double _duration;
    NSError *_error;
    long long _state;
}

@property (nonatomic) double currentTime;
@property (nonatomic) double duration;
@property (nonatomic) long long playerState;
@property (retain, nonatomic) NSError *error;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
