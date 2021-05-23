/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSNumber;

@interface FCFeedGroupEmittingNumberCursor : FCFeedGroupEmittingCursor

{
    NSNumber *_number;
}

@property (nonatomic, readonly) NSNumber *number;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumber:(id)arg1;

@end
