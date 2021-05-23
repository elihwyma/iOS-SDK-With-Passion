/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface CLHarvester : NSObject

{
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (void)submitSample:(id)arg1;
- (void)connect;
- (id)currentStateDictionary;

@end
