//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFEndSearchFeedback : SFFeedback
{
    BOOL _isCanceled;
    NSString *_uuid;
    NSUInteger _cancelSearchEvent;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger cancelSearchEvent; // @synthesize cancelSearchEvent=_cancelSearchEvent;
@property(nonatomic) BOOL isCanceled; // @synthesize isCanceled=_isCanceled;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartSearch:(id)arg1;

@end

