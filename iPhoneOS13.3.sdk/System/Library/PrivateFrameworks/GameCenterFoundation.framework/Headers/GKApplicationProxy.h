//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSApplicationProxy, NSBundle, NSDate, NSDictionary, NSNumber, NSString;

@interface GKApplicationProxy : NSObject
{
    LSApplicationProxy *_lsProxy;
    NSDictionary *_metadata;
}

+ (id)metadataForBundleURL:(id)arg1;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) LSApplicationProxy *lsProxy; // @synthesize lsProxy=_lsProxy;
@property(readonly, retain, nonatomic) NSString *bundleShortVersion;
@property(readonly, retain, nonatomic) NSString *bundleVersion;
@property(readonly, nonatomic, getter=isInstalled) BOOL installed;
@property(readonly, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;
@property(readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property(readonly, retain, nonatomic) NSDate *purchaseDate;
- (id)bundleURL;
@property(readonly, retain, nonatomic) NSNumber *externalVersion;
@property(readonly, retain, nonatomic) NSNumber *adamID;
@property(readonly, retain, nonatomic) NSString *bundleID;
@property(readonly, retain, nonatomic) NSBundle *bundle;
- (void)dealloc;
- (id)initWithBundleID:(id)arg1;
- (id)initWithProxy:(id)arg1;

@end

