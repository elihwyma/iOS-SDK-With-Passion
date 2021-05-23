/*
 Image: /System/Library/PrivateFrameworks/NewDeviceOutreach.framework/NewDeviceOutreach
 */

#import <Foundation/NSObject.h>

@interface NDOManager : NSObject

- (id)agentConnection;
- (void)getWarrantyUsingPolicy:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)scheduleOutreachWithReply:(CDUnknownBlockType)arg1;

@end
