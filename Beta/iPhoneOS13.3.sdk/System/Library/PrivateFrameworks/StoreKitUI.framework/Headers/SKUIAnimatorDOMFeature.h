/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class IKAppContext, NSString;

@protocol SKUIAnimatorDOMFeatureDelegate;

__attribute__((visibility("hidden")))
@interface SKUIAnimatorDOMFeature : NSObject

{
    id <SKUIAnimatorDOMFeatureDelegate> _delegate;
    IKAppContext *_appContext;
    NSString *_featureName;
}

@property (weak, nonatomic) id <SKUIAnimatorDOMFeatureDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *featureName;
@property (weak, nonatomic, readonly) IKAppContext *appContext;

+ (id)featureName;
+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

@end
