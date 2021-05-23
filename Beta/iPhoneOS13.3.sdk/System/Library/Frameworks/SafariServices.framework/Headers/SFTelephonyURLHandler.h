/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface SFTelephonyURLHandler : NSObject

{
    NSMutableSet *_pendingRequests;
}

@property (retain, nonatomic) NSMutableSet *pendingRequests;

+ (id)sharedInstance;

- (id)init;
- (_Bool)openURLForDialRequest:(id)arg1 withScene:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addObserverForRequest:(id)arg1;
- (void)removeObserverForRequest:(id)arg1;

@end
