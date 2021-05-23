/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/Swift-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol _CDPDataPoint <Swift>

@property (nonatomic, readonly) _Bool userIsSender;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) NSArray *peopleIdentifiers;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) _Bool userIsThreadInitiator;

@end
