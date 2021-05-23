/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@interface NSPortNameServer : NSObject

+ (id)systemDefaultPortNameServer;
+ (id)defaultPortNameServer;

- (_Bool)registerPort:(id)arg1 name:(id)arg2;
- (id)portForName:(id)arg1 host:(id)arg2;
- (id)portForName:(id)arg1;
- (_Bool)removePortForName:(id)arg1;
- (_Bool)registerPort:(id)arg1 forName:(id)arg2;
- (id)portForName:(id)arg1 onHost:(id)arg2;

@end
