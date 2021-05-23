/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class NSString;

@protocol AMSBagProtocol;

@interface AMSURLParser : NSObject <Swift>

{
    id <AMSBagProtocol> _bag;
}

@property (retain, nonatomic) id <AMSBagProtocol> bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;

- (id)initWithBag:(id)arg1;
- (id)bagContract;
- (id)initWithBagContract:(id)arg1;
- (id)isCommerceUIURL:(id)arg1;

@end
