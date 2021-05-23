/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class IKAppContext, NSMutableArray, NSString;

@protocol SKUIPhysicalCirclesTemplateDelegate;

__attribute__((visibility("hidden")))
@interface SKUIPhysicalCirclesTemplateDOMFeature : NSObject

{
    IKAppContext *_appContext;
    id <SKUIPhysicalCirclesTemplateDelegate> _delegate;
    NSMutableArray *_domUpdateBlocks;
    NSString *_featureName;
    NSMutableArray *_pendingAnimationRequests;
}

@property (weak, nonatomic) id <SKUIPhysicalCirclesTemplateDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *featureName;
@property (weak, nonatomic, readonly) IKAppContext *appContext;

+ (id)featureName;
+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (void)finishDOMUpdates;
- (id)popPendingAnimationRequests;
- (void)_addDOMUpdateBlock:(CDUnknownBlockType)arg1;
- (void)_requestAnimation:(id)arg1;

@end
