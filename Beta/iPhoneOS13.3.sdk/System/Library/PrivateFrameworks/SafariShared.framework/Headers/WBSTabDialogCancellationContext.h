/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface WBSTabDialogCancellationContext : NSObject

{
    NSString *_reason;
    NSDictionary *_userInfo;
}

@property (copy, nonatomic, readonly) NSString *reason;
@property (copy, nonatomic, readonly) NSDictionary *userInfo;

+ (id)tabClosedContext;
+ (id)provisionalNavigationContext;
+ (id)committedNavigationContextWithURL:(id)arg1;
+ (id)cancellationContextWithReason:(id)arg1 userInfo:(id)arg2;

- (id)init;
- (id)initWithReason:(id)arg1 userInfo:(id)arg2;

@end
