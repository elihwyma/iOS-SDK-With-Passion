/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXColumnLayout, SXLayoutBlueprint;

@protocol SXDOMObjectProviding, SXUnitConverterFactory;

@interface SXComponentInsertionLayoutProvider : NSObject

{
    SXLayoutBlueprint *_layoutBlueprint;
    id <SXDOMObjectProviding> _DOMObjectProvider;
    id <SXUnitConverterFactory> _unitConverterFactory;
}

@property (nonatomic, readonly) SXLayoutBlueprint *layoutBlueprint;
@property (nonatomic, readonly) id <SXDOMObjectProviding> DOMObjectProvider;
@property (nonatomic, readonly) id <SXUnitConverterFactory> unitConverterFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGSize viewportSize;
@property (nonatomic, readonly) struct CGSize documentSize;
@property (nonatomic, readonly) SXColumnLayout *columnLayout;

- (id)layoutBlueprintForMarker:(id)arg1;
- (struct CGRect)frameForComponent:(id)arg1;
- (id)suggestedMarginForMarker:(id)arg1;
- (id)unitConverterForMarker:(id)arg1;
- (id)initWithBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 unitConverterFactory:(id)arg3;

@end
