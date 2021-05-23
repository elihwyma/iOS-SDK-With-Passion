/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@interface GCKEventItem : NSObject

{
    CDStruct_68f9d01f *_event;
    unsigned int _pid;
}

@property CDStruct_68f9d01f *event;
@property unsigned int pid;

- (id)init;
- (void)dealloc;
- (id)initWithEvent:(CDStruct_68f9d01f *)arg1 remotePeer:(unsigned int)arg2;

@end
