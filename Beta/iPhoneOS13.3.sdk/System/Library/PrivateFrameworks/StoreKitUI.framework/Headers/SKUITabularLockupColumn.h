/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUITabularLockupColumn : NSObject

{
    NSMutableArray *_childViewElements;
    long long _identifier;
    struct CGSize _size;
}

@property (nonatomic) long long identifier;
@property (nonatomic) struct CGSize size;
@property (copy, nonatomic, readonly) NSArray *childViewElements;

- (id)description;
- (void)_addChildViewElement:(id)arg1;
- (id)initWithColumnIdentifier:(long long)arg1;

@end
