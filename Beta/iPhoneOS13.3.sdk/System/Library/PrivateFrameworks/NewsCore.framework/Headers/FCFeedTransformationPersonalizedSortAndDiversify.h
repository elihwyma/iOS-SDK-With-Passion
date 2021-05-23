/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSArray, NSString;

@protocol FCFeedPersonalizing;

@interface FCFeedTransformationPersonalizedSortAndDiversify : NSObject <Swift>

{
    unsigned long long _limit;
    id <FCFeedPersonalizing> _feedPersonalizer;
    long long _sortOptions;
    NSArray *_preselectedItems;
}

@property (nonatomic) unsigned long long limit;
@property (retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer;
@property (nonatomic) long long sortOptions;
@property (retain, nonatomic) NSArray *preselectedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transformationWithPersonalizer:(id)arg1 sortOptions:(long long)arg2 limit:(unsigned long long)arg3;
+ (id)transformationWithPersonalizer:(id)arg1 sortOptions:(long long)arg2 limit:(unsigned long long)arg3 preselectedItems:(id)arg4;
+ (id)transformationWithPersonalizer:(id)arg1 limit:(unsigned long long)arg2;

- (id)transformFeedItems:(id)arg1;

@end
