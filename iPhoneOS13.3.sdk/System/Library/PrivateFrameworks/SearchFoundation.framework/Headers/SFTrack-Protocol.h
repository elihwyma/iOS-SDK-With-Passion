//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, NSString, NSURL, SFActionItem;

@protocol SFTrack <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFActionItem *playAction;
@property(copy, nonatomic) NSURL *preview;
@property(nonatomic) BOOL highlighted;
@property(copy, nonatomic) NSString *duration;
@property(copy, nonatomic) NSString *number;
@property(copy, nonatomic) NSString *title;
@end

