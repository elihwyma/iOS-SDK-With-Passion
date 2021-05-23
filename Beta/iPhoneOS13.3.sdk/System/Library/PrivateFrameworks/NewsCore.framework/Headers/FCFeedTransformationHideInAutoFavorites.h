/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface FCFeedTransformationHideInAutoFavorites : NSObject <Swift>

{
    NSDictionary *_feedContextByFeedID;
    NSSet *_autoFavoriteTagIDs;
}

@property (copy, nonatomic) NSDictionary *feedContextByFeedID;
@property (copy, nonatomic) NSSet *autoFavoriteTagIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transformationWithFeedContextByFeedID:(id)arg1 autoFavoriteTagIDs:(id)arg2;

- (id)transformFeedItems:(id)arg1;

@end
