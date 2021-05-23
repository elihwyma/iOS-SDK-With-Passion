/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface NSCollectionLayoutGroupCustomItem : NSObject <Swift>

{
    long long _zIndex;
    struct CGRect _frame;
}

@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic, readonly) long long zIndex;

+ (id)customItemWithFrame:(struct CGRect)arg1 zIndex:(long long)arg2;
+ (id)customItemWithFrame:(struct CGRect)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 zIndex:(long long)arg2;

@end
