/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class NSError;

@interface MSASPConnectionGate : NSObject

{
    NSError *_error;
}

@property (retain, nonatomic) NSError *error;

+ (id)gate;

@end
