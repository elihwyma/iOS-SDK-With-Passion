/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface PLDaemonJobReply : NSObject

{
    NSObject<OS_xpc_object> *_xpcReply;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcReply;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReply:(id)arg1;

@end
