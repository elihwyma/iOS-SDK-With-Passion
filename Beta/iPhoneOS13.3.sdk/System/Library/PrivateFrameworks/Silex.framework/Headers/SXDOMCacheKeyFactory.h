/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXDocumentProviding, SXHintsConfigurationOptionProvider;

@interface SXDOMCacheKeyFactory : NSObject

{
    id <SXDocumentProviding> _documentProvider;
    id <SXHintsConfigurationOptionProvider> _hintsConfigurationOptionProvider;
}

@property (nonatomic, readonly) id <SXDocumentProviding> documentProvider;
@property (nonatomic, readonly) id <SXHintsConfigurationOptionProvider> hintsConfigurationOptionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createCacheKeyForLayoutOptions:(id)arg1;
- (id)initWithDocumentProvider:(id)arg1 hintsConfigurationOptionProvider:(id)arg2;

@end
