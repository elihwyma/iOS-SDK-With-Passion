/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableSet;

@protocol OS_dispatch_source, SKUIMediaQueryDelegate;

__attribute__((visibility("hidden")))
@interface SKUIMediaQueryEvaluator : NSObject

{
    NSMapTable *_cachedFeatureResults;
    id <SKUIMediaQueryDelegate> _delegate;
    NSMutableSet *_observedNotificationNames;
    NSObject<OS_dispatch_source> *_reloadTimer;
}

@property (weak, nonatomic) id <SKUIMediaQueryDelegate> delegate;

+ (void)initialize;
+ (void)registerFeatureClass:(Class)arg1;

- (id)init;
- (void)dealloc;
- (void)reloadData;
- (_Bool)evaluateMediaQuery:(id)arg1;
- (void)_featureDidChangeNotification:(id)arg1;
- (id)_delegateValuesForKeys:(id)arg1;

@end
