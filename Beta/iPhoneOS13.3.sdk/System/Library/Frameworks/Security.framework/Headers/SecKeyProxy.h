/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface SecKeyProxy : NSObject

{
    id _key;
    NSData *_certificate;
    NSXPCListener *_listener;
}

@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)targetForKey:(struct __SecKey *)arg1 error:(struct __CFError **)arg2;
+ (struct __SecKey *)createItemFromEndpoint:(id)arg1 certificate:(id *)arg2 error:(id *)arg3;
+ (struct __SecKey *)createKeyFromEndpoint:(id)arg1 error:(id *)arg2;
+ (struct __SecIdentity *)createIdentityFromEndpoint:(id)arg1 error:(id *)arg2;

- (void)dealloc;
- (void)invalidate;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithKey:(struct __SecKey *)arg1;
- (id)initWithIdentity:(struct __SecIdentity *)arg1;
- (id)initWithKey:(struct __SecKey *)arg1 certificate:(id)arg2;

@end
