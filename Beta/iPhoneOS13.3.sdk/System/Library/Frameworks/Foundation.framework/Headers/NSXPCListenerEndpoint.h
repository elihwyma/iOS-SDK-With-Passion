/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@interface NSXPCListenerEndpoint : NSObject <Swift>

{
    void *_internal;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_endpoint;
- (id)_initWithConnection:(id)arg1;
- (void)_setEndpoint:(id)arg1;

@end
