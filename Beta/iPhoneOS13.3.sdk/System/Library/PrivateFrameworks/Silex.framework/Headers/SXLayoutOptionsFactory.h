/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXColumnCalculator, SXDocumentProvider;

@interface SXLayoutOptionsFactory : NSObject

{
    SXColumnCalculator *_columnCalculator;
    SXDocumentProvider *_documentProvider;
}

@property (nonatomic, readonly) SXColumnCalculator *columnCalculator;
@property (nonatomic, readonly) SXDocumentProvider *documentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createLayoutOptionsWithViewportSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2 traitCollection:(id)arg3 bundleSubscriptionStatus:(long long)arg4 channelSubscriptionStatus:(long long)arg5 contentSizeCategory:(id)arg6 testing:(_Bool)arg7 viewingLocation:(unsigned long long)arg8 contentScaleFactor:(double)arg9;
- (id)initWithColumnCalculator:(id)arg1 documentProvider:(id)arg2;

@end
