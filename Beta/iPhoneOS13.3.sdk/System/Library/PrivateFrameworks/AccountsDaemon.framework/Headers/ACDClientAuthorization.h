/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class ACDClient, NSDictionary, NSSet;

@interface ACDClientAuthorization : NSObject

{
    _Bool _isGranted;
    ACDClient *_client;
    NSSet *_grantedPermissions;
    NSDictionary *_options;
}

@property (nonatomic) _Bool isGranted;
@property (retain, nonatomic) ACDClient *client;
@property (retain, nonatomic) NSSet *grantedPermissions;
@property (copy, nonatomic) NSDictionary *options;

- (id)initForClient:(id)arg1;

@end
