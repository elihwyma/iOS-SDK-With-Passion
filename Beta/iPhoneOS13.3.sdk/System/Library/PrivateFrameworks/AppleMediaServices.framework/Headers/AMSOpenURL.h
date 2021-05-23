/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSProcessInfo, NSMutableSet, NSURL;

@protocol AMSBagProtocol;

@interface AMSOpenURL : NSObject

{
    NSMutableSet *_attemptedTargets;
    NSURL *_URL;
    AMSProcessInfo *_clientInfo;
    id <AMSBagProtocol> _bag;
}

@property (retain, nonatomic) NSMutableSet *attemptedTargets;
@property (nonatomic, readonly) NSURL *URL;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) id <AMSBagProtocol> bag;

+ (_Bool)openStandardURL:(id)arg1;
+ (id)openURL:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3;
+ (id)_sortedTargets;
+ (id)_modifiedURLFromURL:(id)arg1 bundleInfo:(id)arg2;
+ (void)openURL:(id)arg1 account:(id)arg2 preferredClient:(id)arg3;

- (id)initWithURL:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3;
- (id)_performOpen;
- (_Bool)_shouldAttemptUsingInfo:(id)arg1;
- (_Bool)_openURL:(id)arg1 bundleInfo:(id)arg2;

@end
