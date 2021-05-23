/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXTransitionDataSourceNode, UIScrollView;

@protocol SXComponentController, SXDocumentMetadataProviding;

@interface SXTransitionDataSourceProvider : NSObject

{
    id <SXComponentController> _componentController;
    UIScrollView *_scrollView;
    id <SXDocumentMetadataProviding> _documentMetadataProvider;
    SXTransitionDataSourceNode *_currentNode;
}

@property (nonatomic, readonly) id <SXComponentController> componentController;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) id <SXDocumentMetadataProviding> documentMetadataProvider;
@property (retain, nonatomic) SXTransitionDataSourceNode *currentNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)transitionDataSourceForType:(unsigned long long)arg1;
- (id)initWithComponentController:(id)arg1 scrollView:(id)arg2 documentMetadataProvider:(id)arg3;

@end
