/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXAdControllerProvider, SXDocumentProviding;

@interface SXAdvertisingSettingsFactory : NSObject

{
    id <SXDocumentProviding> _documentProvider;
    id <SXAdControllerProvider> _adControllerProvider;
}

@property (nonatomic, readonly) id <SXDocumentProviding> documentProvider;
@property (nonatomic, readonly) id <SXAdControllerProvider> adControllerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createAdvertisingSettingsWithDOMObjectProvider:(id)arg1;
- (id)initWithDocumentProvider:(id)arg1 adControllerProvider:(id)arg2;

@end
