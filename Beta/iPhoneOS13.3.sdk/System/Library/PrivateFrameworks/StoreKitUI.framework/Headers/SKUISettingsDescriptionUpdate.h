/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet;

__attribute__((visibility("hidden")))
@interface SKUISettingsDescriptionUpdate : NSObject

{
    NSArray *_indexPaths;
    NSIndexSet *_indexSet;
    long long _updateType;
}

@property (retain, nonatomic) NSArray *indexPaths;
@property (retain, nonatomic) NSIndexSet *indexSet;
@property (nonatomic, readonly) long long updateType;

- (id)initWithUpdateType:(long long)arg1;

@end
