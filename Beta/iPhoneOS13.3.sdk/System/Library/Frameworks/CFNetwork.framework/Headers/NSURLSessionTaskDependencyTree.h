/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSMutableDictionary, NSURL, __NSCFURLSessionTaskDependencyTreeNode;

@interface NSURLSessionTaskDependencyTree : NSObject

@property (retain, nonatomic) NSMutableDictionary *_dependencies;
@property (retain, nonatomic) __NSCFURLSessionTaskDependencyTreeNode *_effectiveTree;
@property (retain, nonatomic) NSURL *mainDocumentURL;

+ (id)dependencyTreeDefaultWeb;
+ (id)dependencyTreeWithMainDocumentURL:(id)arg1 dependencyDescriptions:(id)arg2;
+ (id)dependencyTreeWithJSONData:(id)arg1 error:(id *)arg2;
+ (id)mimeTypeForURLString:(id)arg1;

- (id)_parentForURLPath:(id)arg1;
- (id)_parentForMimeType:(id)arg1;

@end
