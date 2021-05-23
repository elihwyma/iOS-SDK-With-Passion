/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIActionCommerceInterruptedTransactionManager : NSObject

{
    NSDictionary *interruptedOfferDetails;
}

+ (id)sharedInstance;

- (id)getLastInterruptedOfferDetails;
- (void)setLastInterruptedOfferDetails:(id)arg1;

@end
