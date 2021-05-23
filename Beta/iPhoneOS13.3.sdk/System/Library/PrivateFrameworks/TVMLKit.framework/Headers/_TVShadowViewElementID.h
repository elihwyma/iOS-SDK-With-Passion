/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class IKViewElement, NSString;

__attribute__((visibility("hidden")))
@interface _TVShadowViewElementID : NSObject

{
    IKViewElement *_viewElement;
    NSString *_itemID;
}

@property (copy, nonatomic, readonly) NSString *itemID;
@property (nonatomic, readonly) IKViewElement *viewElement;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewElement:(id)arg1;

@end
