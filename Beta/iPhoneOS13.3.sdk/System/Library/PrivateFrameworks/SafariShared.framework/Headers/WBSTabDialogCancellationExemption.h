/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@interface WBSTabDialogCancellationExemption : NSObject

{
    CDUnknownBlockType _cancellationExemptionHandler;
}

+ (id)sameOriginNavigationExemption:(id)arg1;
+ (id)provisionalNavigationExemption;
+ (id)committedNavigationExemption;

- (id)init;
- (id)initWithCancellationHandler:(CDUnknownBlockType)arg1;
- (_Bool)isExemptFromCancellationInContext:(id)arg1;

@end
