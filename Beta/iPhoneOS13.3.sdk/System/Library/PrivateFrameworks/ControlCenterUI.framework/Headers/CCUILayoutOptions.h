/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

#import <ControlCenterUI/Swift-Protocol.h>

@interface CCUILayoutOptions : NSObject <Swift>

{
    double _itemEdgeSize;
    double _itemSpacing;
}

@property (nonatomic, readonly) double itemEdgeSize;
@property (nonatomic, readonly) double itemSpacing;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_initWithLayoutOptions:(id)arg1;

@end
