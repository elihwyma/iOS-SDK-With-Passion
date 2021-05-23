/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@protocol OS_xpc_object;

@interface BSXPCBundle : NSObject

{
    NSString *_bundleIdentifier;
    NSString *_bundlePath;
    NSString *_executablePath;
    NSDictionary *_infoDictionary;
    NSObject<OS_xpc_object> *_xpcBundle;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSString *bundlePath;
@property (copy, nonatomic, readonly) NSString *executablePath;
@property (copy, nonatomic, readonly) NSDictionary *infoDictionary;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcBundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bundleWithPath:(id)arg1;
+ (id)mainBundle;
+ (id)bundleWithXPCBundle:(id)arg1;
+ (id)bundleForPID:(int)arg1;
+ (id)bundleWithExecutablePath:(id)arg1;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithXPCBundle:(id)arg1;

@end
