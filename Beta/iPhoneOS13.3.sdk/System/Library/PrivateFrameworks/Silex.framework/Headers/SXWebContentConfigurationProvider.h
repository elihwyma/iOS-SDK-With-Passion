/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSLocale, NSString;

@protocol SXPresentationAttributesProvider, SXStoreFrontProvider, SXWebContentLocationProvider;

@interface SXWebContentConfigurationProvider : NSObject

{
    id <SXPresentationAttributesProvider> _presentationAttributesProvider;
    id <SXStoreFrontProvider> _storeFrontProvider;
    NSLocale *_locale;
    id <SXWebContentLocationProvider> _locationProvider;
    CDUnknownBlockType _changeBlock;
}

@property (nonatomic, readonly) id <SXPresentationAttributesProvider> presentationAttributesProvider;
@property (nonatomic, readonly) id <SXStoreFrontProvider> storeFrontProvider;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) id <SXWebContentLocationProvider> locationProvider;
@property (copy, nonatomic) CDUnknownBlockType changeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)onChange:(CDUnknownBlockType)arg1;
- (void)presentationAttributesDidChangeFrom:(id)arg1 toAttributes:(id)arg2;
- (id)configurationForSize:(struct CGSize)arg1 dataSources:(id)arg2;
- (void)invokeChangeListener;
- (id)initWithPresentationAttributesProvider:(id)arg1 storeFrontProvider:(id)arg2 locale:(id)arg3 locationProvider:(id)arg4;

@end
