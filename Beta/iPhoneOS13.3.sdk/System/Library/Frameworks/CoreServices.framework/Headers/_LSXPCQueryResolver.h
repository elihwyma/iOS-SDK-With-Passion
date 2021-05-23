/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSString, _LSLocalQueryResolver;

__attribute__((visibility("hidden")))
@interface _LSXPCQueryResolver : NSObject

{
    _LSLocalQueryResolver *_localResolver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_enumerateResolvedResultsOfQuery:(id)arg1 XPCConnection:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)resolveWhatWeCanLocallyWithQueries:(id)arg1 XPCConnection:(id)arg2 error:(id *)arg3;
- (id)_resolveQueries:(id)arg1 XPCConnection:(id)arg2 error:(id *)arg3;

@end
