/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FCFeedPersonalizing;

@interface FCFeedTransformationPersonalizedDiversifiedLimit : NSObject

{
    unsigned long long _limit;
    id <FCFeedPersonalizing> _feedPersonalizer;
}

@property (nonatomic) unsigned long long limit;
@property (retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transformationWithPersonalizer:(id)arg1;
+ (id)transformationWithPersonalizer:(id)arg1 limit:(unsigned long long)arg2;

- (id)transformFeedItems:(id)arg1;
- (id)transformFeedItems:(id)arg1 withRespectToLimit:(unsigned long long)arg2;

@end
