/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/Swift-Protocol.h>

@class NSArray, NSString;

@protocol EMSearchableIndexQueryBuilder <Swift>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) CDUnknownBlockType resultsBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (copy, nonatomic) CDUnknownBlockType failureBlock;
@property (copy, nonatomic) CDUnknownBlockType gatheredBlock;
@property (copy, nonatomic) CDUnknownBlockType changedItemsBlock;
@property (copy, nonatomic) CDUnknownBlockType removedItemsBlock;
@property (copy, nonatomic) CDUnknownBlockType countChangedBlock;
@property (copy, nonatomic) NSArray *fetchAttributes;
@property (copy, nonatomic) NSArray *protectionClasses;
@property (copy, nonatomic) NSArray *rankingQueries;
@property (nonatomic) long long maxCount;
@property (nonatomic) _Bool live;
@property (nonatomic) _Bool counting;
@property (copy, nonatomic) NSString *logIdentifier;

@end
