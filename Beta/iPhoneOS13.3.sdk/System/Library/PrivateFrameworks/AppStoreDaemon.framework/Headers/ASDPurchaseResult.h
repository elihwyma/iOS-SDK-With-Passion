/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSError, NSNumber;

@interface ASDPurchaseResult : NSObject <Swift>

{
    _Bool _success;
    NSError *_error;
    NSNumber *_itemID;
}

@property (retain) NSNumber *itemID;
@property (nonatomic, readonly) _Bool success;
@property (nonatomic, readonly) NSError *error;

+ (_Bool)supportsSecureCoding;
+ (id)failedToPurchaseItemID:(id)arg1 withError:(id)arg2;
+ (id)successfullyPurchasedItemID:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccess:(_Bool)arg1 error:(id)arg2;

@end
