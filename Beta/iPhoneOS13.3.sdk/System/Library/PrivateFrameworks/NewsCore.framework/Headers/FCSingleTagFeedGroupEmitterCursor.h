/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingCursor.h>

#import <NewsCore/Swift-Protocol.h>

@class FCFeedRange;

@interface FCSingleTagFeedGroupEmitterCursor : FCFeedGroupEmittingCursor <Swift>

{
    FCFeedRange *_freeFeedRange;
    FCFeedRange *_paidFeedRange;
}

@property (copy, nonatomic) FCFeedRange *freeFeedRange;
@property (copy, nonatomic) FCFeedRange *paidFeedRange;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
