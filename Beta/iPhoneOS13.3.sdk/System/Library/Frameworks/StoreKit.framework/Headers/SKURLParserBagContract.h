/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class AMSBagValue, NSString, SSURLBag;

__attribute__((visibility("hidden")))
@interface SKURLParserBagContract : NSObject

{
    SSURLBag *_bag;
}

@property (retain, nonatomic) SSURLBag *bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) AMSBagValue *commerceUIURLPatterns;

+ (id)sharedContract;

- (id)init;

@end
