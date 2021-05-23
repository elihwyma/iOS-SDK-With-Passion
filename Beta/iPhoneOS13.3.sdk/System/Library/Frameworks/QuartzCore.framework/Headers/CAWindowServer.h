/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CAWindowServer : NSObject

{
    struct CAWindowServerImpl *_impl;
    _Bool _mirroringEnabled;
}

@property (readonly) NSArray *displays;
@property (getter=isMirroringEnabled) _Bool mirroringEnabled;
@property unsigned int rendererFlags;
@property (getter=isSecure) _Bool secure;

+ (id)context;
+ (id)server;
+ (id)contextWithOptions:(id)arg1;
+ (id)serverWithOptions:(id)arg1;
+ (id)serverIfRunning;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)_init;
- (id)secureModeViolations;
- (void)addDisplay:(id)arg1;
- (void)removeDisplay:(id)arg1;
- (void)removeAllDisplays;
- (id)displayWithName:(id)arg1;
- (id)displayWithDisplayId:(unsigned int)arg1;
- (id)displayWithUniqueId:(id)arg1;
- (void)_detectDisplays;
- (id)insecureProcessIds;
- (unsigned int)clientPortOfContextId:(unsigned int)arg1;
- (unsigned int)taskNamePortOfContextId:(unsigned int)arg1;
- (unsigned int)contextIdHostingContextId:(unsigned int)arg1;

@end
