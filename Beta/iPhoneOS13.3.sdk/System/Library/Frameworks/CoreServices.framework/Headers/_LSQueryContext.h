/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@protocol _LSQueryResolving;

@interface _LSQueryContext : NSObject

{
    id _resolver;
}

@property (readonly) id <_LSQueryResolving> _resolver;

+ (id)defaultContext;
+ (void)setSimulateLimitedMappingForXCTests:(_Bool)arg1;
+ (_Bool)simulateLimitedMappingForXCTests;

- (id)init;
- (id)debugDescription;
- (id)_init;
- (void)enumerateResolvedResultsOfQuery:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)resolveQueries:(id)arg1 error:(id *)arg2;
- (void)clearCaches;
- (id)_resolveQueries:(id)arg1 XPCConnection:(id)arg2 error:(id *)arg3;

@end
