/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventContentShared : TPSAnalyticsEvent

{
    NSString *_contentID;
    NSString *_collectionID;
    NSString *_shareMethod;
}

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *shareMethod;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (id)analyticsEventRepresentation;
- (id)initWithContentID:(id)arg1 collectionID:(id)arg2 shareMethod:(id)arg3;

@end
