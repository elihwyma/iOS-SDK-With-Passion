/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCVideoRule : NSObject

{
    int _width;
    int _height;
    float _frameRate;
    float _priority;
    int _payload;
}

@property (nonatomic, readonly) int iWidth;
@property (nonatomic, readonly) int iHeight;
@property (nonatomic, readonly) float fRate;
@property (nonatomic, readonly) int iPayload;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) float fPref;

- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3;
- (id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 payload:(int)arg4 priority:(float)arg5;
- (void)setFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3;
- (id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 payload:(int)arg4;
- (long long)compareByPref:(id)arg1;
- (void)setToVideoRule:(id)arg1;

@end
