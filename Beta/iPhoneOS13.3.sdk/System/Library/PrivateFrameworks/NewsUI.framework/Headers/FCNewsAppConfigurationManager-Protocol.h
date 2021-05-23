/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/Swift-Protocol.h>

@class NSArray, NSString;

@protocol FCNewsAppConfiguration, FCNewsAppConfiguration><FCJSONEncodableObjectProviding;

@protocol FCNewsAppConfigurationManager <Swift>

@property (nonatomic, readonly) id <FCNewsAppConfiguration> appConfiguration;
@property (nonatomic, readonly) id <FCNewsAppConfiguration> possiblyUnfetchedAppConfiguration;
@property (nonatomic, readonly) NSArray *treatmentIDs;
@property (nonatomic, readonly) NSArray *segmentSetIDs;
@property (copy, nonatomic, readonly) NSString *feldsparID;
@property (nonatomic, readonly) id <FCNewsAppConfiguration> fetchedAppConfiguration;
@property (nonatomic, readonly) id <FCNewsAppConfiguration><FCJSONEncodableObjectProviding> jsonEncodableAppConfiguration;

- (unsigned short)fetchAppConfigurationIfNeededWithCompletionQueue:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAppConfigurationIfNeededWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshAppConfigurationIfNeededWithCompletionQueue:refreshCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchTrendingSearchesIfNeededWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)addAppConfigObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAppConfigObserver: /* Error: Ran out of types for this method. */;

@end
