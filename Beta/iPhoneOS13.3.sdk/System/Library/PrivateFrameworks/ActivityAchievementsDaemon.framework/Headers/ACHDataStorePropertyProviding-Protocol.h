/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <ActivityAchievementsDaemon/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol ACHDataStorePropertyProviding <Swift>

@property (nonatomic, readonly) NSString *uniqueName;
@property (nonatomic, readonly) NSArray *dataStorePropertyKeys;
@property (retain, nonatomic) NSDictionary *dataStoreProperties;

- (unsigned short)dataStoreDidClearAllProperties:completion: /* Error: Ran out of types for this method. */;

@end
