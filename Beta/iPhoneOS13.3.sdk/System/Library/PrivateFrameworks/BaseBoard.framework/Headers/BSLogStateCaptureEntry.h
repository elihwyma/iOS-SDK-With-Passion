/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface BSLogStateCaptureEntry : NSObject

{
    NSString *_title;
    CDUnknownBlockType _captureBlock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) CDUnknownBlockType captureBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

@end
