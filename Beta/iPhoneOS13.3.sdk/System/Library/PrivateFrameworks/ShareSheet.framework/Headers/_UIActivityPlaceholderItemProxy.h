/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSProxy.h>

@interface _UIActivityPlaceholderItemProxy : NSProxy

{
    id _uikit_placeholderItem;
}

@property (nonatomic, readonly) id placeholderItem;

+ (id)unproxiedItemForItem:(id)arg1;
+ (id)unproxiedItemsForItems:(id)arg1;

- (_Bool)isProxy;
- (_Bool)isEqual:(id)arg1;
- (Class)class;
- (_Bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)hash;
- (Class)superclass;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1;

@end
