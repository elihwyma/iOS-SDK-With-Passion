//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PGTitle;

@interface PGTitleTuple : NSObject
{
    PGTitle *_title;
    PGTitle *_subtitle;
    NSArray *_locationNames;
}

@property(readonly, nonatomic) NSArray *locationNames; // @synthesize locationNames=_locationNames;
@property(readonly, nonatomic) PGTitle *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) PGTitle *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)initWithWithTitle:(id)arg1 subtitle:(id)arg2 locationNames:(id)arg3;

@end

