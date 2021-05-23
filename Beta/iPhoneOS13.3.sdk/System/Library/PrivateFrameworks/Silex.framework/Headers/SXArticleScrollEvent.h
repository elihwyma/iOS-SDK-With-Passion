/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXAnalyticsEvent.h>

@interface SXArticleScrollEvent : SXAnalyticsEvent

{
    double _startPosition;
    double _endPosition;
    double _targetPosition;
    double _velocity;
}

@property (nonatomic) double startPosition;
@property (nonatomic) double endPosition;
@property (nonatomic) double targetPosition;
@property (nonatomic) double velocity;

@end
