/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface SFBehavior : NSObject

{
    NSString *_family;
    NSXPCConnection *_connection;
}

@property (retain) NSString *family;
@property (retain) NSXPCConnection *connection;

+ (id)behaviorFamily:(id)arg1;

- (id)initBehaviorFamily:(id)arg1 connection:(id)arg2;
- (unsigned int)ramping:(id)arg1 force:(_Bool)arg2;
- (_Bool)feature:(id)arg1 defaultValue:(_Bool)arg2;
- (_Bool)featureEnabled:(id)arg1;
- (_Bool)featureDisabled:(id)arg1;
- (id)configurationNumber:(id)arg1 defaultValue:(id)arg2;
- (id)configurationString:(id)arg1 defaultValue:(id)arg2;

@end
