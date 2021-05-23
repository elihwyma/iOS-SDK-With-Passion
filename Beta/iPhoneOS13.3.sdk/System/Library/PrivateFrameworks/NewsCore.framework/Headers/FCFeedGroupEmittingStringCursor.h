/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSString;

@interface FCFeedGroupEmittingStringCursor : FCFeedGroupEmittingCursor

{
    NSString *_string;
}

@property (nonatomic, readonly) NSString *string;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;

@end
