/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFPasswordAccount.h>

@class CLAPIEngine, NSString;

@interface WFCloudAppAccount : WFPasswordAccount

{
    CLAPIEngine *_engine;
}

@property (nonatomic, readonly) CLAPIEngine *engine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)localizedServiceName;
+ (id)serviceID;
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1;

- (void)dealloc;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)accountInformationRetrievalSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)requestDidFailWithError:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;

@end
