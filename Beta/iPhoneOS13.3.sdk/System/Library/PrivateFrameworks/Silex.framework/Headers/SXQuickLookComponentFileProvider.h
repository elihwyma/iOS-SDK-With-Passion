/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXDOMObjectProviding, SXDocumentShareURLProvider, SXResourceDataSource;

@interface SXQuickLookComponentFileProvider : NSObject

{
    id <SXDOMObjectProviding> _DOMObjectProvider;
    id <SXResourceDataSource> _resourceDataSource;
    id <SXDocumentShareURLProvider> _shareURLProvider;
}

@property (nonatomic, readonly) id <SXDOMObjectProviding> DOMObjectProvider;
@property (nonatomic, readonly) id <SXResourceDataSource> resourceDataSource;
@property (nonatomic, readonly) id <SXDocumentShareURLProvider> shareURLProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)fileForComponent:(id)arg1 onCompletion:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)initWithDOMObjectProvider:(id)arg1 resourceDataSource:(id)arg2 shareURLProvider:(id)arg3;
- (id)copyFileIfNeeded:(id)arg1 to:(id)arg2 error:(id *)arg3;

@end
