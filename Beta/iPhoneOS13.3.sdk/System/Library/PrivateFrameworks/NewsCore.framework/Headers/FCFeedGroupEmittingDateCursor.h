/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSDate;

@interface FCFeedGroupEmittingDateCursor : FCFeedGroupEmittingCursor

{
    NSDate *_date;
}

@property (nonatomic, readonly) NSDate *date;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;

@end
