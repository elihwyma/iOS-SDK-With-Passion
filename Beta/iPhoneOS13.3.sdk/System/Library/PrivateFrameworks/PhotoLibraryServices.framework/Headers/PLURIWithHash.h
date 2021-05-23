/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface PLURIWithHash : NSObject

{
    NSObject<OS_xpc_object> *_uri;
    unsigned long long _uriHash;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *uri;
@property (nonatomic) unsigned long long uriHash;

- (id)init;
- (id)initWithXPCURI:(id)arg1;

@end
