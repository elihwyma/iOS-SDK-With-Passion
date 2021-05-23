/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIKBGeometry;

@interface UIKBMergeAction : NSObject <Swift>

{
    NSString *_remainingKeyName;
    NSString *_disappearingKeyName;
    NSArray *_orderedKeyList;
    UIKBGeometry *_factors;
}

@property (retain, nonatomic) NSString *remainingKeyName;
@property (retain, nonatomic) NSString *disappearingKeyName;
@property (retain, nonatomic) NSArray *orderedKeyList;
@property (retain, nonatomic) UIKBGeometry *factors;

+ (id)mergeActionWithRemainingKeyName:(id)arg1 disappearingKeyName:(id)arg2 factors:(id)arg3;
+ (id)mergeActionWithOrderedKeyList:(id)arg1 factors:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
