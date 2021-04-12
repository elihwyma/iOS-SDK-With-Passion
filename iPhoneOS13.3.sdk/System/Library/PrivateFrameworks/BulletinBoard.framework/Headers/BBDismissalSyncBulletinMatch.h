//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BBDismissalItem, NSString;

@interface BBDismissalSyncBulletinMatch : NSObject
{
    NSString *_sectionID;
    BBDismissalItem *_dismissalItem;
    NSString *_dismissalID;
    NSUInteger _feeds;
}

@property(nonatomic) NSUInteger feeds; // @synthesize feeds=_feeds;
@property(copy, nonatomic) NSString *dismissalID; // @synthesize dismissalID=_dismissalID;
@property(retain, nonatomic) BBDismissalItem *dismissalItem; // @synthesize dismissalItem=_dismissalItem;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithDismissalDictionaryItem:(id)arg1;
- (id)initWithDismissalID:(id)arg1 andItem:(id)arg2;

@end

