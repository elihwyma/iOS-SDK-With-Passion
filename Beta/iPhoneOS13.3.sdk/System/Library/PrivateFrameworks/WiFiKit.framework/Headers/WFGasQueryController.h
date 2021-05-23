/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableSet, NSSet, WFInterface;

@protocol WFGasQueryControllerDelegate;

@interface WFGasQueryController : NSObject

{
    id <WFGasQueryControllerDelegate> _delegate;
    NSSet *_profiles;
    NSMapTable *_gasResponseCache;
    NSMutableSet *_resolvedNetworks;
    WFInterface *_interface;
}

@property (retain, nonatomic) NSMapTable *gasResponseCache;
@property (retain, nonatomic) NSMutableSet *resolvedNetworks;
@property (retain, nonatomic) WFInterface *interface;
@property (weak, nonatomic) id <WFGasQueryControllerDelegate> delegate;
@property (nonatomic, readonly) NSSet *profiles;

- (id)init;
- (id)initWithInterface:(id)arg1;
- (void)removeAllProfiles;
- (void)resolveProfilesForNetworks:(id)arg1;
- (id)profileForNetwork:(id)arg1;
- (void)resolveProfileForNetwork:(id)arg1 handler:(CDUnknownBlockType)arg2 force:(_Bool)arg3;
- (void)removeProfileForNetwork:(id)arg1;
- (void)_processANQPResults:(id)arg1 scanRecords:(id)arg2 error:(id)arg3;
- (id)_existingProfileForANQPResult:(id)arg1;

@end
