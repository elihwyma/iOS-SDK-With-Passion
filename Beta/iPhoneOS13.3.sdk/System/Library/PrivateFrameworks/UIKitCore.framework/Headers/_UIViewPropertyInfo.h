/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@protocol UIVectorOperatable;

__attribute__((visibility("hidden")))
@interface _UIViewPropertyInfo : NSObject <Swift>

{
    id <UIVectorOperatable> _previousValue;
    id <UIVectorOperatable> _value;
}

@property (retain, nonatomic) id <UIVectorOperatable> previousValue;
@property (retain, nonatomic) id <UIVectorOperatable> value;

+ (id)viewPropertyInfoWithValue:(id)arg1 previousValue:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
