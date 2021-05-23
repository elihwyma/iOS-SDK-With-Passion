/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface TVStyleSheetRegistry : NSObject

{
    NSMutableArray *_rootNodes;
    NSMutableDictionary *_nodesByTemplateName;
}

@property (retain, nonatomic) NSMutableArray *rootNodes;
@property (retain, nonatomic) NSMutableDictionary *nodesByTemplateName;

+ (id)_urlForStyleSheetName:(id)arg1;

- (id)init;
- (void)_createDefaultRootNodes;
- (void)commitStyleSheets;
- (void)_commitTemplateTreeNode:(id)arg1 withParentStyleSheetURLs:(id)arg2;
- (void)registerStyleSheetURLs:(id)arg1 forTemplateName:(id)arg2 basedOnTemplateName:(id)arg3;

@end
