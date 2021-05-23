/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class NSString, PBCodable;

__attribute__((visibility("hidden")))
@interface _NACIDSMessageRecord : NSObject

{
    PBCodable *_message;
    long long _type;
    double _timeout;
    NSString *_queueOne;
}

@property (retain, nonatomic) PBCodable *message;
@property (nonatomic) long long type;
@property (nonatomic) double timeout;
@property (copy, nonatomic) NSString *queueOne;

@end
