/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppPrototypeIdentifier, IKViewElement, NSIndexSet;

__attribute__((visibility("hidden")))
@interface IKDSEPrototypeMapping : NSObject

{
    IKAppPrototypeIdentifier *_identifier;
    IKViewElement *_viewElement;
    NSIndexSet *_usageIndexes;
}

@property (nonatomic, readonly) IKAppPrototypeIdentifier *identifier;
@property (nonatomic, readonly) IKViewElement *viewElement;
@property (copy, nonatomic, readonly) NSIndexSet *usageIndexes;

+ (id)prototypeMappingFromAppPrototype:(id)arg1 dataSourceElement:(id)arg2 elementFactory:(id)arg3;

- (id)initWithIdentifier:(id)arg1 viewElement:(id)arg2 usageIndexes:(id)arg3;

@end
