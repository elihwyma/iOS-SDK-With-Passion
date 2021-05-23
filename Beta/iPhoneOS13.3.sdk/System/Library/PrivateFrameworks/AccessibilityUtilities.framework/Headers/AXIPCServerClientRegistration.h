/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol AXIPCServerClientRegistrationDelegate, OS_dispatch_source;

@interface AXIPCServerClientRegistration : NSObject

{
    unsigned int _port;
    NSString *_identifier;
    NSObject<OS_dispatch_source> *_invalidationSource;
    id <AXIPCServerClientRegistrationDelegate> _delegate;
}

@property (nonatomic, readonly) unsigned int port;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *invalidationSource;
@property (weak, nonatomic) id <AXIPCServerClientRegistrationDelegate> delegate;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPort:(unsigned int)arg1 identifier:(id)arg2;

@end
