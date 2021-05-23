/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMediaObject.h>

@interface CKAVMediaObject : CKMediaObject

{
    _Bool _durationLoaded;
    double _duration;
}

@property (nonatomic) double duration;

+ (id)durationCache;

- (id)description;

@end
