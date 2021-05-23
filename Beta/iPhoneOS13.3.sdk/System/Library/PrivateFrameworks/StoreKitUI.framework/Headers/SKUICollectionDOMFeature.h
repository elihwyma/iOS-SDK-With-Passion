/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class IKAppContext, NSString;

@protocol SKUICollectionDOMFeatureTargetting;

__attribute__((visibility("hidden")))
@interface SKUICollectionDOMFeature : NSObject

{
    IKAppContext *_appContext;
    NSString *_featureName;
    id <SKUICollectionDOMFeatureTargetting> _collectionTarget;
}

@property (weak, nonatomic) id <SKUICollectionDOMFeatureTargetting> collectionTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *featureName;
@property (weak, nonatomic, readonly) IKAppContext *appContext;

+ (id)featureName;
+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (void)setEditing:(_Bool)arg1 options:(id)arg2;

@end
