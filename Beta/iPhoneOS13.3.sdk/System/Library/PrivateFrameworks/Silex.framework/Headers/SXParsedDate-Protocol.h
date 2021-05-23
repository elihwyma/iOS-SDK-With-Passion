/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class NSDate, NSTimeZone;

@protocol SXParsedDate <Swift>

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) _Bool containedTime;
@property (nonatomic, readonly) NSTimeZone *timeZone;

@end
