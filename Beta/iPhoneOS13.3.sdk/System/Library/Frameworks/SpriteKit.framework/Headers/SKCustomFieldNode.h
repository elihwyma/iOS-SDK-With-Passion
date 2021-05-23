/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKFieldNode.h>

@interface SKCustomFieldNode : SKFieldNode

@property (copy, nonatomic) CDUnknownBlockType block;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_initialize;
- (id)_descriptionClassName;
- (void)setBatchBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)batchBlock;

@end
