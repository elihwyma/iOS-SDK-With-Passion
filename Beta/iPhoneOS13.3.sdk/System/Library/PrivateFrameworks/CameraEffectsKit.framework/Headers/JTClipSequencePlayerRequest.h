/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class JTClipSequencePlayer, NSString;

@interface JTClipSequencePlayerRequest : NSObject

{
    NSString *_uniqueID;
    CDUnknownBlockType _block;
    double _queuedTime;
    double _startTime;
    unsigned long long _type;
    CDUnknownBlockType _completionBlock;
    JTClipSequencePlayer *_player;
}

@property (nonatomic, readonly) NSString *uniqueID;
@property (copy, nonatomic) CDUnknownBlockType block;
@property (nonatomic) double queuedTime;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (weak) JTClipSequencePlayer *player;

+ (id)stringFromRequestType:(unsigned long long)arg1;

- (id)description;
- (id)initWithBlock:(CDUnknownBlockType)arg1 ofType:(unsigned long long)arg2;

@end
