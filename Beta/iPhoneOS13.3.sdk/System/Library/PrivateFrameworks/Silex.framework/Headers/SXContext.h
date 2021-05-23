/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXDocumentController;

@protocol SXHost, SXResourceDataSource, SXTextContentProvider;

@interface SXContext : NSObject

{
    id <SXHost> _host;
    SXDocumentController *_documentController;
    id <SXTextContentProvider> _textContentProvider;
    id <SXResourceDataSource> _resourceDataSource;
}

@property (weak, nonatomic, readonly) id <SXResourceDataSource> resourceDataSource;
@property (nonatomic, readonly) id <SXHost> host;
@property (nonatomic, readonly) SXDocumentController *documentController;
@property (nonatomic, readonly) id <SXTextContentProvider> textContentProvider;

+ (void)prewarm;

- (id)initWithIdentifier:(id)arg1 shareURL:(id)arg2 JSONData:(id)arg3 resourceDataSource:(id)arg4 host:(id)arg5 error:(id *)arg6;

@end
