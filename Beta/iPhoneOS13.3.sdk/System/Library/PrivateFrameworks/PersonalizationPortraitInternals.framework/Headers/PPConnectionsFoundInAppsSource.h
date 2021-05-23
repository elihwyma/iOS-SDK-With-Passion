/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <PersonalizationPortraitInternals/PPConnectionsSource.h>

@class NSString;

@protocol SGSuggestionsServiceURLsProtocol;

@interface PPConnectionsFoundInAppsSource : PPConnectionsSource

{
    id <SGSuggestionsServiceURLsProtocol> _fiaURLService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)identifier;

- (id)init;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6;
- (id)initWithFoundInAppsService:(id)arg1;

@end
