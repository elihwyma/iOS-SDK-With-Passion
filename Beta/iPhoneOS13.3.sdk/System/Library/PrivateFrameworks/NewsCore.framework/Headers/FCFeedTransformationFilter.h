/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCBundleSubscription, NSSet, NSString;

@protocol FCPaidAccessCheckerType;

@interface FCFeedTransformationFilter : NSObject <Swift>

{
    long long _filterOptions;
    NSSet *_otherArticleIDs;
    NSSet *_otherClusterIDs;
    NSSet *_mutedTagIDs;
    NSSet *_subscribedTagIDs;
    NSString *_briefingsTagID;
    id <FCPaidAccessCheckerType> _paidAccessChecker;
    FCBundleSubscription *_bundleSubscription;
}

@property (nonatomic) long long filterOptions;
@property (copy, nonatomic) NSSet *otherArticleIDs;
@property (copy, nonatomic) NSSet *otherClusterIDs;
@property (copy, nonatomic) NSSet *mutedTagIDs;
@property (copy, nonatomic) NSSet *subscribedTagIDs;
@property (copy, nonatomic) NSString *briefingsTagID;
@property (retain, nonatomic) id <FCPaidAccessCheckerType> paidAccessChecker;
@property (retain, nonatomic) FCBundleSubscription *bundleSubscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transformationWithFilterOptions:(long long)arg1 configuration:(id)arg2 context:(id)arg3;
+ (id)transformationWithFilterOptions:(long long)arg1 otherArticleIDs:(id)arg2 otherClusterIDs:(id)arg3 subscribedTagIDs:(id)arg4 mutedTagIDs:(id)arg5 briefingsTagID:(id)arg6 paidAccessChecker:(id)arg7 bundleSubscription:(id)arg8;
+ (id)transformationWithFilterOptions:(long long)arg1 configuration:(id)arg2 context:(id)arg3 otherArticleIDs:(id)arg4;

- (id)transformFeedItems:(id)arg1;
- (id)transformHeadlines:(id)arg1;
- (id)transformHeadline:(id)arg1;

@end
