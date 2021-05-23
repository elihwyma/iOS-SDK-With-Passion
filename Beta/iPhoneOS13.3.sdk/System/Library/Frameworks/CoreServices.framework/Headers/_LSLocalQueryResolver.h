/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSLocalQueryResolver : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_enumerateResolvedResultsOfQuery:(id)arg1 XPCConnection:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_resolveQueries:(id)arg1 XPCConnection:(id)arg2 error:(id *)arg3;

@end
