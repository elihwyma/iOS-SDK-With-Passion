//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingCursor.h>


@class FCFeedRange;

@interface FCSingleTagFeedGroupEmitterCursor : FCFeedGroupEmittingCursor <NSCopying>
{
    FCFeedRange *_freeFeedRange;
    FCFeedRange *_paidFeedRange;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) FCFeedRange *paidFeedRange; // @synthesize paidFeedRange=_paidFeedRange;
@property(copy, nonatomic) FCFeedRange *freeFeedRange; // @synthesize freeFeedRange=_freeFeedRange;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

