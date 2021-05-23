/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSMapTable, NSString;

@protocol FCFeedPersonalizing;

@interface FCFeedTransformationPersonalizedSort : NSObject <Swift>

{
    id <FCFeedPersonalizing> _feedPersonalizer;
    NSMapTable *_feedItemScores;
    long long _sortOptions;
    long long _configurationSet;
}

@property (retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer;
@property (retain, nonatomic) NSMapTable *feedItemScores;
@property (nonatomic) long long sortOptions;
@property (nonatomic) long long configurationSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transformationWithPersonalizer:(id)arg1;
+ (id)transformationWithPersonalizer:(id)arg1 configurationSet:(long long)arg2;
+ (id)transformationWithPersonalizer:(id)arg1 feedItemScores:(id)arg2;
+ (id)transformationWithPersonalizer:(id)arg1 feedItemScores:(id)arg2 sortOptions:(long long)arg3 configurationSet:(long long)arg4;
+ (id)transformationWithPersonalizer:(id)arg1 feedItemScores:(id)arg2 sortOptions:(long long)arg3;
+ (id)transformationWithPersonalizer:(id)arg1 sortOptions:(long long)arg2;

- (id)transformFeedItems:(id)arg1;
- (id)transformHeadlines:(id)arg1;

@end
