/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarItem : NSObject

{
    long long _idiom;
    int _type;
}

@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) Class viewClass;
@property (nonatomic, readonly) int priority;
@property (nonatomic, readonly) int leftOrder;
@property (nonatomic, readonly) int rightOrder;
@property (nonatomic, readonly) NSString *indicatorName;

+ (_Bool)isItemWithTypeExclusive:(int)arg1 outBlacklistItems:(id *)arg2 outWhitelistItems:(id *)arg3;
+ (_Bool)itemType:(int)arg1 idiom:(long long)arg2 appearsInRegion:(int)arg3;
+ (_Bool)itemType:(int)arg1 idiom:(long long)arg2 canBeEnabledForData:(id)arg3 style:(id)arg4;
+ (id)itemWithType:(int)arg1 idiom:(long long)arg2;
+ (_Bool)typeIsValid:(int)arg1;

- (id)description;
- (id)initWithType:(int)arg1;
- (_Bool)appearsOnLeft;
- (_Bool)appearsOnRight;
- (_Bool)appearsInRegion:(int)arg1;
- (long long)comparePriority:(id)arg1;
- (int)centerOrder;
- (_Bool)appearsOnCenter;
- (long long)compareLeftOrder:(id)arg1;
- (long long)compareRightOrder:(id)arg1;
- (long long)compareCenterOrder:(id)arg1;

@end
