/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL, SSLookupItem;

@interface WLKLookupBasedInstallable : NSObject

{
    SSLookupItem *_item;
}

@property (nonatomic, readonly) SSLookupItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSArray *appBundleIDs;
@property (copy, nonatomic, readonly) NSArray *appAdamIDs;
@property (copy, nonatomic, readonly) NSURL *appStoreURL;

- (id)init;
- (id)initWithLookupItem:(id)arg1;
- (id)appIconURLForSize:(struct CGSize)arg1;

@end
