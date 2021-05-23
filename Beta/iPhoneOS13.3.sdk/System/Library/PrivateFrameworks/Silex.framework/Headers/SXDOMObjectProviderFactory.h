/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXJSONObjectMerger;

@protocol SXDocumentControllerProvider;

@interface SXDOMObjectProviderFactory : NSObject

{
    id <SXDocumentControllerProvider> _documentControllerProvider;
    SXJSONObjectMerger *_componentStyleMerger;
    SXJSONObjectMerger *_componentTextStyleMerger;
}

@property (nonatomic, readonly) id <SXDocumentControllerProvider> documentControllerProvider;
@property (nonatomic, readonly) SXJSONObjectMerger *componentStyleMerger;
@property (nonatomic, readonly) SXJSONObjectMerger *componentTextStyleMerger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createDOMObjectProvider;
- (id)initWithDocumentControllerProvider:(id)arg1 componentStyleMerger:(id)arg2 componentTextStyleMerger:(id)arg3;

@end
