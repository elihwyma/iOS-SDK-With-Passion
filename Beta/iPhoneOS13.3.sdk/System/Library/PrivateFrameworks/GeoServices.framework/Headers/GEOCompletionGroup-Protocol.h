/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSArray, NSString;

@protocol GEOCompletionGroup <Swift>

@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSString *localizedSectionHeader;
@property (nonatomic, readonly) _Bool shouldInterleaveClientResults;
@property (nonatomic, readonly) _Bool enforceServerResultsOrder;

@end
