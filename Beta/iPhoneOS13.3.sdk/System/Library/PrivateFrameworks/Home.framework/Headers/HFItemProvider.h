/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSSet;

@interface HFItemProvider : NSObject <Swift>

{
    NSSet *_clientInvalidationReasons;
}

@property (nonatomic, readonly) NSSet *items;
@property (retain, nonatomic) NSSet *clientInvalidationReasons;

+ (_Bool)prefersNonBlockingReloads;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)reloadItems;
- (id)reloadItemsWithHomeKitObjects:(id)arg1 filter:(CDUnknownBlockType)arg2 itemMap:(CDUnknownBlockType)arg3;
- (id)invalidationReasons;
- (id)reloadItemsWithObjects:(id)arg1 keyAdaptor:(CDUnknownBlockType)arg2 itemAdaptor:(CDUnknownBlockType)arg3 filter:(CDUnknownBlockType)arg4 itemMap:(CDUnknownBlockType)arg5;

@end
