/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class SSURLBag;

@interface VSStoreURLBag : NSObject

{
    SSURLBag *_bag;
}

@property (retain, nonatomic) SSURLBag *bag;

- (id)init;
- (void)invalidateCache;
- (void)loadValueForKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
