/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKViewElementStyle, IKViewElementStyleComposer, NSDictionary, NSString;

@interface IKTemplateTreeNode : NSObject

{
    IKTemplateTreeNode *_parentNode;
    NSString *_nodeName;
    IKViewElementStyle *_styleOverrides;
    NSDictionary *_childNodes;
    IKViewElementStyleComposer *_styleComposer;
}

@property (weak, nonatomic, readonly) IKTemplateTreeNode *parentNode;
@property (copy, nonatomic, readonly) NSString *nodeName;
@property (copy, nonatomic, readonly) IKViewElementStyle *styleOverrides;
@property (copy, nonatomic) NSDictionary *childNodes;
@property (retain, nonatomic) IKViewElementStyleComposer *styleComposer;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNodeName:(id)arg1 styleOverrides:(id)arg2 parentNode:(id)arg3;

@end
