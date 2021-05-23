/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKNode.h>

@class NSString, NSURL;

@interface SKReferenceNode : SKNode

{
    NSURL *_referenceURL;
    NSString *_referenceFileName;
    SKNode *_resolvedNode;
    _Bool _hasResolvedURL;
}

@property (retain, nonatomic) NSString *referenceFileName;
@property (retain, nonatomic) NSURL *referenceURL;

+ (_Bool)supportsSecureCoding;
+ (id)referenceNodeWithURL:(id)arg1;
+ (id)referenceNodeWithFileNamed:(id)arg1;
+ (id)nodeWithFileNamed:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithFileNamed:(id)arg1;
- (void)resolveReferenceNode;
- (void)didLoadReferenceNode:(id)arg1;
- (id)_resolveReferenceNode;
- (void)resolveNodeFromArchiveData:(id)arg1;
- (id)resolvedNode;

@end
