/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSArray, NSString, __NSHostExtraIvars;

@interface NSHost : NSObject

{
    NSArray *names;
    NSArray *addresses;
    id reserved;
}

@property (retain, nonatomic) __NSHostExtraIvars *reserved;
@property (copy, readonly) NSString *name;
@property (copy, readonly) NSArray *names;
@property (copy, readonly) NSString *address;
@property (copy, readonly) NSArray *addresses;
@property (copy, readonly) NSString *localizedName;

+ (id)currentHost;
+ (id)hostWithName:(id)arg1;
+ (id)hostWithAddress:(id)arg1;
+ (_Bool)isHostCacheEnabled;
+ (void)setHostCacheEnabled:(_Bool)arg1;
+ (void)flushHostCache;

- (void)dealloc;
- (id)description;
- (id)_thingToResolve;
- (id)initToResolve:(id)arg1 as:(int)arg2;
- (void)resolve:(CDUnknownBlockType)arg1;
- (void)blockingResolveUntil:(int)arg1;
- (void)__resolveWithFlags:(int)arg1 resultArray:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)resolveCurrentHostWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)isEqualToHost:(id)arg1;

@end
