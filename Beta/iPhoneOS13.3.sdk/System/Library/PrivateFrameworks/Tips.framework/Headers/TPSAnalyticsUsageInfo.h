/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSDate, NSPredicate, NSString;

@interface TPSAnalyticsUsageInfo : NSObject

{
    NSDate *_firstShownDate;
    NSPredicate *_usagePredicate;
    NSString *_usageStream;
    NSString *_identifier;
    unsigned long long _desiredOutcomeCount;
}

@property (retain, nonatomic) NSDate *firstShownDate;
@property (retain, nonatomic) NSPredicate *usagePredicate;
@property (copy, nonatomic) NSString *usageStream;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long desiredOutcomeCount;

@end
