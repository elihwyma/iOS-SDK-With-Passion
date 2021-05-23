/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class LSApplicationProxy, NSBundle, NSDate, NSDictionary, NSNumber, NSString;

@interface GKApplicationProxy : NSObject

{
    LSApplicationProxy *_lsProxy;
    NSDictionary *_metadata;
}

@property (retain, nonatomic) LSApplicationProxy *lsProxy;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic, readonly) NSBundle *bundle;
@property (retain, nonatomic, readonly) NSString *bundleVersion;
@property (retain, nonatomic, readonly) NSString *bundleShortVersion;
@property (retain, nonatomic, readonly) NSString *bundleID;
@property (retain, nonatomic, readonly) NSNumber *adamID;
@property (retain, nonatomic, readonly) NSNumber *externalVersion;
@property (retain, nonatomic, readonly) NSDate *purchaseDate;
@property (nonatomic, readonly, getter=isRestricted) _Bool restricted;
@property (nonatomic, readonly, getter=isGameCenterEnabled) _Bool gameCenterEnabled;
@property (nonatomic, readonly, getter=isInstalled) _Bool installed;

+ (id)metadataForBundleURL:(id)arg1;

- (void)dealloc;
- (id)bundleURL;
- (id)initWithBundleID:(id)arg1;
- (id)initWithProxy:(id)arg1;

@end
