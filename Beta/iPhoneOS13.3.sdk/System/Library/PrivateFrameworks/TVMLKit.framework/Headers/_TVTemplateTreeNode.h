/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _TVTemplateTreeNode : NSObject

{
    NSMutableArray *_derivedTemplateNodes;
    _Bool _isAbstract;
    NSString *_templateName;
    NSArray *_styleSheetURLs;
    NSArray *_finalURLs;
}

@property (copy, nonatomic, readonly) NSString *templateName;
@property (copy, nonatomic, readonly) NSArray *styleSheetURLs;
@property (nonatomic, readonly) _Bool isAbstract;
@property (copy, nonatomic) NSArray *finalURLs;
@property (copy, nonatomic, readonly) NSArray *derivedTemplateNodes;

- (id)initWithTemplateName:(id)arg1 styleSheetURLs:(id)arg2 abstract:(_Bool)arg3;
- (id)initWithTemplateName:(id)arg1 styleSheetURLs:(id)arg2;
- (void)addDerivedTemplateNode:(id)arg1;

@end
