/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@protocol OS_xpc_object;

@interface GEOResourceManifestUpdateAssertion : NSObject

{
    NSString *_reason;
    double _creationTimestamp;
    NSObject<OS_xpc_object> *_connection;
    int _notifyToken;
}

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithReason:(id)arg1;
- (void)_connectToGeod;

@end
