/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSPortNameServer.h>

@interface NSMachBootstrapServer : NSPortNameServer

+ (id)sharedInstance;

- (_Bool)registerPort:(id)arg1 name:(id)arg2;
- (id)portForName:(id)arg1 host:(id)arg2;
- (id)portForName:(id)arg1;
- (_Bool)removePortForName:(id)arg1;
- (id)portForName:(id)arg1 options:(unsigned long long)arg2;
- (id)servicePortWithName:(id)arg1;

@end
