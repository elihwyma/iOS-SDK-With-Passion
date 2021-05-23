/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@class FMDispatchTimer, NSString;

__attribute__((visibility("hidden")))
@interface FMNanoIDSRequest : NSObject

{
    NSString *_idsMessageID;
    CDUnknownBlockType _responseHandler;
    FMDispatchTimer *_timer;
}

@property (retain, nonatomic) NSString *idsMessageID;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;
@property (retain, nonatomic) FMDispatchTimer *timer;

@end
