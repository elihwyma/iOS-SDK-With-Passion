/*
 Image: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LiveFSMounterClientHelper : NSObject

{
    NSString *_providerName;
}

@property (retain) NSString *providerName;

- (void)LiveMounterClientCreateDomain:(id)arg1 displayName:(id)arg2 how:(int)arg3 reply:(CDUnknownBlockType)arg4;
- (void)LiveMounterClientCreateDomain:(id)arg1 displayName:(id)arg2 how:(int)arg3 storageName:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)LiveMounterClientCreateDomain:(id)arg1 how:(int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)LiveMounterClientCleanupDomain:(id)arg1 how:(int)arg2 reply:(CDUnknownBlockType)arg3;
- (id)LiveMounterClientHelperDestroyDomain:(id)arg1;
- (void)LiveMounterClientHelperSetProviderName:(id)arg1;

@end
