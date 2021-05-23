/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <DocumentManager/DOCDocumentSource.h>

@class FPProviderDomain;

@interface DOCSearchingDocumentSource : DOCDocumentSource

{
    FPProviderDomain *_providerDomain;
}

- (id)icon;
- (void)setIcon:(id)arg1;
- (id)supportedSearchFilters;
- (id)initWithProviderDomain:(id)arg1;

@end
