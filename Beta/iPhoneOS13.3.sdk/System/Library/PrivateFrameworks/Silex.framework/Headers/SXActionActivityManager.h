/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SXActionActivityManager : NSObject

{
    NSMutableDictionary *_activityProviders;
}

@property (nonatomic, readonly) NSMutableDictionary *activityProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)activityGroupForAction:(id)arg1;
- (id)previewActivityForAction:(id)arg1;
- (id)activityProviderForAction:(id)arg1;
- (void)registerActionActivityProvider:(id)arg1 actionType:(id)arg2;

@end
