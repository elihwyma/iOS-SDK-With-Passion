/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface PLXPCObject : NSObject

{
    NSObject<OS_xpc_object> *_object;
}

@property (readonly) NSObject<OS_xpc_object> *object;

+ (struct _xpc_type_s *)type;
+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCObject:(id)arg1;

@end
