/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICMediaApplicationBanner.h>

@class NSDate, NSDictionary, NSString;

@interface ICMutableMediaApplicationBanner : ICMediaApplicationBanner

@property (copy, nonatomic) NSString *guid;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *target;
@property (copy, nonatomic) NSDictionary *rawPayload;
@property (copy, nonatomic) NSDate *displayWindowStartTime;
@property (copy, nonatomic) NSDate *displayWindowEndTime;
@property (nonatomic) int maxDisplayCount;
@property (nonatomic) int displayCount;
@property (copy, nonatomic) NSString *setID;
@property (nonatomic) _Bool hasBeenTapped;

@end
