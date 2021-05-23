/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSNumber, NSString;

@interface TPSAnalyticsEventContentViewed : TPSAnalyticsEvent

{
    NSNumber *_viewNumber;
    _Bool _animationFinished;
    _Bool _seenThisContentBefore;
    double _timeOnScreen;
    double _animationLoadTime;
    NSString *_contentID;
    NSString *_collectionID;
    NSString *_viewMethod;
    NSString *_viewMode;
    NSString *_contentStyle;
}

@property (nonatomic) double timeOnScreen;
@property (nonatomic) double animationLoadTime;
@property (nonatomic) _Bool animationFinished;
@property (nonatomic) _Bool seenThisContentBefore;
@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (nonatomic, readonly) NSNumber *sessionViewNumber;
@property (retain, nonatomic) NSString *viewMethod;
@property (retain, nonatomic) NSString *viewMode;
@property (retain, nonatomic) NSString *contentStyle;

+ (_Bool)supportsSecureCoding;
+ (id)retrieveAndIncrementSessionViewNumberForKey:(id)arg1;
+ (void)resetSessionViewNumber;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (id)analyticsEventRepresentation;
- (id)initWithContentID:(id)arg1 collectionID:(id)arg2 viewMethod:(id)arg3 contentStyle:(id)arg4 viewMode:(id)arg5 timeOnScreen:(double)arg6 animationLoadTime:(double)arg7 animationFinished:(_Bool)arg8 seenThisContentBefore:(_Bool)arg9;

@end
