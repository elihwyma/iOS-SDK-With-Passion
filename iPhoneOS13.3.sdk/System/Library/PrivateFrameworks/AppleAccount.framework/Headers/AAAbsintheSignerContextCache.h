//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AAAbsintheContext, NSDate;

@interface AAAbsintheSignerContextCache : NSObject
{
    NSDate *_creationDate;
    AAAbsintheContext *_context;
}

+ (id)cacheWithContext:(id)arg1;
@property(readonly, nonatomic) AAAbsintheContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
// - (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

