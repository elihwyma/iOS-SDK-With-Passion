/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _SCRCStackNode : NSObject

{
    id _object;
    _SCRCStackNode *_prev;
    _SCRCStackNode *_next;
}

@property (retain, nonatomic) id object;
@property (retain, nonatomic) _SCRCStackNode *prev;
@property (retain, nonatomic) _SCRCStackNode *next;

@end
