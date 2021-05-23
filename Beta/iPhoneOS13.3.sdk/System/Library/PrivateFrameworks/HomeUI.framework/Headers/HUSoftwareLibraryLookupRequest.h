/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

#import <HomeUI/Swift-Protocol.h>

@class NSString;

@interface HUSoftwareLibraryLookupRequest : NSObject <Swift>

{
    NSString *_bundleID;
    NSString *_storeID;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *storeID;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleID:(id)arg1 storeID:(id)arg2;

@end
