/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class NSArray, NSString;

@protocol FCStorefrontAccessCheckable <Swift>

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSArray *blockedStorefrontIDs;
@property (copy, nonatomic, readonly) NSArray *allowedStorefrontIDs;

@end
