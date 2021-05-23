/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSCanOpenURLManager : NSObject

{
    NSMutableDictionary *_canOpenURLsMap;
    NSObject<OS_dispatch_queue> *_canOpenURLsMapQueue;
    int _saveFlag;
}

+ (id)queryForApplicationsAvailableForOpeningURL:(id)arg1;
+ (id)sharedManager;
+ (struct BindingEvaluator)bindingEvaluatorForScheme:(id)arg1;

- (id)init;
- (_Bool)canOpenURL:(id)arg1 publicSchemes:(_Bool)arg2 privateSchemes:(_Bool)arg3 XPCConnection:(id)arg4 error:(id *)arg5;
- (id)copySchemesMap;
- (_Bool)internalCanOpenURL:(id)arg1 publicSchemes:(_Bool)arg2 privateSchemes:(_Bool)arg3 XPCConnection:(id)arg4 error:(id *)arg5;
- (void)writeSchemesMap;
- (long long)schemeTypeOfScheme:(id)arg1;
- (void)resetSchemeQueryLimitForApplicationWithIdentifier:(id)arg1;
- (void)getIsURL:(id)arg1 alwaysCheckable:(_Bool *)arg2 hasHandler:(_Bool *)arg3;
- (_Bool)isXPCConnection:(id)arg1 allowedToCheckScheme:(id)arg2 error:(id *)arg3;
- (_Bool)findApplicationBundleID:(unsigned int *)arg1 bundleData:(const struct LSBundleData **)arg2 context:(struct LSContext *)arg3 forXPCConnection:(id)arg4;
- (_Bool)isBundleID:(unsigned int)arg1 bundleData:(const struct LSBundleData *)arg2 context:(struct LSContext *)arg3 allowedToCheckScheme:(id)arg4 error:(id *)arg5;
- (_Bool)legacy_isBundleID:(unsigned int)arg1 bundleData:(const struct LSBundleData *)arg2 context:(struct LSContext *)arg3 allowedToCheckScheme:(id)arg4 error:(id *)arg5;

@end
