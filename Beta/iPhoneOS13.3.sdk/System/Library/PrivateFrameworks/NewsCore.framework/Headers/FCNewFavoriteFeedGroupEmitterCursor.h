/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingCursor.h>

#import <NewsCore/Swift-Protocol.h>

@class NSSet;

@interface FCNewFavoriteFeedGroupEmitterCursor : FCFeedGroupEmittingCursor <Swift>

{
    NSSet *_tagIDsReturned;
}

@property (copy, nonatomic) NSSet *tagIDsReturned;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
