/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKStyleFactory, NSDictionary, NSMutableDictionary, NSString;

@interface IKTemplateStyleSheet : NSObject

{
    IKStyleFactory *_styleFactory;
    NSDictionary *_templateTree;
    NSMutableDictionary *_styleComposersByKeypath;
    NSString *_templateName;
}

@property (retain, nonatomic, readonly) IKStyleFactory *styleFactory;
@property (copy, nonatomic, readonly) NSDictionary *templateTree;
@property (retain, nonatomic, readonly) NSMutableDictionary *styleComposersByKeypath;
@property (copy, nonatomic, readonly) NSString *templateName;

+ (void)loadStyleSheets;
+ (id)styleSheetForTemplateName:(id)arg1;
+ (void)registerStyleSheetURL:(id)arg1 parentStyleSheets:(id)arg2 forTemplateName:(id)arg3;
+ (id)_styleSheetForTemplateName:(id)arg1;
+ (struct _xmlDoc *)_xmlTreeForTemplateName:(id)arg1;
+ (void)_resolveEmbeddedTemplatesInXmlTree:(struct _xmlNode *)arg1;
+ (struct _xmlDoc *)_xmlTreeWithData:(id)arg1 error:(id *)arg2;
+ (void)_coalesceTrees:(struct _xmlNode *)arg1 overridingTree:(struct _xmlNode *)arg2 forcedTemplateName:(id)arg3;
+ (void)_findNodesInXmlTree:(struct _xmlDoc *)arg1 styleNode:(struct _xmlNode **)arg2 templateNode:(struct _xmlNode **)arg3;
+ (id)_templateTreeNodeWithXMLNode:(struct _xmlNode *)arg1 parentNode:(id)arg2;
+ (void)registerStyleSheetURL:(id)arg1 forTemplateName:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setViewElementStylesDirty;
- (id)_styleComposerForNode:(id)arg1;
- (id)styleComposerForElement:(id)arg1;
- (id)_initWithXMLDoc:(struct _xmlDoc *)arg1 templateName:(id)arg2 error:(id *)arg3;

@end
