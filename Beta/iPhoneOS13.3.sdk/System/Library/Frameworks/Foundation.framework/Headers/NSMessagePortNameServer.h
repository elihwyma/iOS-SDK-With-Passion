/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSPortNameServer.h>

@interface NSMessagePortNameServer : NSPortNameServer

+ (id)sharedInstance;

- (_Bool)registerPort:(id)arg1 name:(id)arg2;
- (id)portForName:(id)arg1 host:(id)arg2;
- (id)portForName:(id)arg1;
- (_Bool)removePortForName:(id)arg1;

@end
