/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWStillImageCaptureDelegateCallbackInfo : NSObject

{
    unsigned int _flag;
    CDStruct_1b6d18a9 _pts;
    _Bool _isPreBracketFrame;
}

@property (nonatomic, readonly) unsigned int flag;
@property (nonatomic, readonly) CDStruct_1b6d18a9 pts;
@property (nonatomic, readonly) _Bool isPreBracketFrame;

- (id)initWithFlag:(unsigned int)arg1;
- (id)initWithFlag:(unsigned int)arg1 pts:(CDStruct_1b6d18a9)arg2 isPreBracketFrame:(_Bool)arg3;

@end
