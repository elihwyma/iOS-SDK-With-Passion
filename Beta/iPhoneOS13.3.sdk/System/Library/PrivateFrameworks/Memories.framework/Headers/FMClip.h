/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface FMClip : NSObject

{
    NSURL *_url;
    long long _position;
    long long _offset;
    long long _duration;
    long long _fadeInLength;
    long long _fadeOutLength;
}

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) long long position;
@property (nonatomic) long long offset;
@property (nonatomic) long long duration;
@property (nonatomic) long long fadeInLength;
@property (nonatomic) long long fadeOutLength;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
