/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class NSArray, NSString;

@protocol FCFeedAdMetadataProviding <Swift>

@property (nonatomic, readonly) NSString *iAdIdentifier;
@property (nonatomic, readonly) NSArray *iAdCategories;
@property (nonatomic, readonly) NSArray *iAdKeywords;
@property (nonatomic, readonly) long long iAdContentProvider;
@property (nonatomic, readonly) NSString *iAdPrimaryAudience;
@property (nonatomic, readonly) NSString *iAdFeedID;
@property (nonatomic, readonly) NSString *iAdSectionID;

@end
