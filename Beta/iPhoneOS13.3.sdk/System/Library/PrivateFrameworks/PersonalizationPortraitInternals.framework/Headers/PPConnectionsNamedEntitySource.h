/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <PersonalizationPortraitInternals/PPConnectionsSource.h>

@class NSString, PPLocalNamedEntityStore;

@interface PPConnectionsNamedEntitySource : PPConnectionsSource

{
    PPLocalNamedEntityStore *_namedEntityStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)identifier;

- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6;
- (id)initWithNamedEntityStore:(id)arg1;

@end
