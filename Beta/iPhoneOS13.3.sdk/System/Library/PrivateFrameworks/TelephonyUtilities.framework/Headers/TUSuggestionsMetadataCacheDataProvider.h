/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/TUMetadataCacheDataProvider.h>

@class NSObject;

@protocol OS_dispatch_semaphore;

@interface TUSuggestionsMetadataCacheDataProvider : TUMetadataCacheDataProvider

{
    NSObject<OS_dispatch_semaphore> *_suggestionsServiceThrottleSemaphore;
    id _suggestionsContactsObserver;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *suggestionsServiceThrottleSemaphore;
@property (nonatomic, readonly) id suggestionsContactsObserver;

+ (id)sharedService;
+ (_Bool)canUseSiriSuggestions;
+ (void)suggestedNamesForDestinationID:(id)arg1 onlySignificant:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (id)suggestedNamesForDestinationID:(id)arg1 onlySignificant:(_Bool)arg2 error:(id *)arg3;
+ (id)newestSuggestedContactForDestinationID:(id)arg1;

- (id)init;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;

@end
