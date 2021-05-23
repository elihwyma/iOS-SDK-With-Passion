/*
 Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FAFamilyCircleRequestConnectionProvider;

@interface FAFamilyCircleRequest : NSObject

{
    NSString *_usernameOrDSID;
    NSString *_passwordOrToken;
    id <FAFamilyCircleRequestConnectionProvider> _connectionProvider;
}

@property (retain, nonatomic) id <FAFamilyCircleRequestConnectionProvider> connectionProvider;
@property (copy) NSString *usernameOrDSID;
@property (copy) NSString *passwordOrToken;

- (id)init;
- (id)requestOptions;
- (id)serviceConnection;
- (id)serviceRemoteObjectWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithConnectionProvider:(id)arg1;

@end
