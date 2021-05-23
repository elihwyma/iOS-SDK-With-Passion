/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSCoder.h>

@class NSXPCConnection;

@protocol NSObject;

@interface NSXPCCoder : NSCoder

{
    id <NSObject> _userInfo;
    id _reserved1;
}

@property (retain) id <NSObject> userInfo;
@property (readonly) NSXPCConnection *connection;

+ (id)_testEncodeAndDecodeObject:(id)arg1 allowedClasses:(id)arg2;
+ (id)_testEncodeAndDecodeObject:(id)arg1 allowedClass:(Class)arg2;
+ (id)_testEncodeAndDecodeInvocation:(id)arg1 interface:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)requiresSecureCoding;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s *)arg1 forKey:(id)arg2;
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
- (id)decodeXPCObjectForKey:(id)arg1;

@end
