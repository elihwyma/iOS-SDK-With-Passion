/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@class NSError;

@interface SiriCoreErrorInfo : NSObject

{
    _Bool _isPeerConnectionError;
    _Bool _isPeerNotNearbyError;
    NSError *_error;
}

@property (retain, nonatomic) NSError *error;
@property (nonatomic) _Bool isPeerConnectionError;
@property (nonatomic) _Bool isPeerNotNearbyError;

@end
