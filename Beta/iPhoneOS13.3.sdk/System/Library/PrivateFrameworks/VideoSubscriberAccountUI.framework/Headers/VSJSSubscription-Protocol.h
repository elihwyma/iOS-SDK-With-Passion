/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/Swift-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol VSJSSubscription <Swift>

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) long long accessLevel;
@property (copy, nonatomic) NSArray *tierIdentifiers;
@property (copy, nonatomic) NSString *billingIdentifier;

- (unsigned short)init;

@end
