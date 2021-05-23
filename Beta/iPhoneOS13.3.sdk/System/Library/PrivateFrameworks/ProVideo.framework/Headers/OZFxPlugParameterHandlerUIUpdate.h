/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface OZFxPlugParameterHandlerUIUpdate : NSObject

{
    int _paramID;
    unsigned int _notificationFlags;
}

+ (id)updateWithParamID:(int)arg1 notificationFlags:(unsigned int)arg2;

- (int)paramID;
- (unsigned int)notificationFlags;

@end
