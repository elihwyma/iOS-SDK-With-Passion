/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@protocol FCFeedPersonalizing;

@interface FCFeedTransformationPersonalizedLimit : NSObject <Swift>

{
    id <FCFeedPersonalizing> _feedPersonalizer;
    double _timeInterval;
}

@property (retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer;
@property (nonatomic) double timeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transformationWithPersonalizer:(id)arg1 dateRange:(id)arg2;
+ (id)transformationWithPersonalizer:(id)arg1 timeInterval:(double)arg2;

- (id)transformFeedItems:(id)arg1;

@end
