/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray, _TVShadowViewElementID;

__attribute__((visibility("hidden")))
@interface _TVShadowViewElement : NSObject

{
    _TVShadowViewElementID *_elementID;
    NSArray *_children;
    _TVShadowViewElement *_parent;
}

@property (copy, nonatomic) _TVShadowViewElementID *elementID;
@property (copy, nonatomic) NSArray *children;
@property (weak, nonatomic) _TVShadowViewElement *parent;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
