/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSArray, NSMutableDictionary;

@interface _HDSourceOrderTransactionCache : NSObject

{
    HDProfile *_profile;
    NSArray *_defaultOrderedSources;
    NSMutableDictionary *_orderedSourceIDsByBundleIdentifier;
}

- (id)init;
- (id)initWithProfile:(id)arg1;
- (id)orderedSourceIDsForBundleIdentifier:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (id)defaultOrderSourcesWithDatabase:(id)arg1 error:(id *)arg2;
- (id)_orderedSourceIDsForBundleIdentifier:(id)arg1 database:(id)arg2 error:(id *)arg3;

@end
