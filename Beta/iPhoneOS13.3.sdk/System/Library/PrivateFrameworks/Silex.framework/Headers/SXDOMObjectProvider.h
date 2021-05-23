/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXComponents, SXDOM, SXJSONObjectMerger;

@protocol SXAutoPlacement, SXDocumentControllerProvider, SXDocumentStyle;

@interface SXDOMObjectProvider : NSObject

{
    SXDOM *_DOM;
    id <SXDocumentControllerProvider> _documentControllerProvider;
    SXJSONObjectMerger *_componentStyleMerger;
    SXJSONObjectMerger *_componentTextStyleMerger;
}

@property (nonatomic, readonly) id <SXDocumentControllerProvider> documentControllerProvider;
@property (nonatomic, readonly) SXJSONObjectMerger *componentStyleMerger;
@property (nonatomic, readonly) SXJSONObjectMerger *componentTextStyleMerger;
@property (retain, nonatomic) SXDOM *DOM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <SXDocumentStyle> documentStyle;
@property (nonatomic, readonly) SXComponents *components;
@property (nonatomic, readonly) id <SXAutoPlacement> autoPlacement;

- (id)componentLayoutForIdentifier:(id)arg1;
- (id)componentStyleForIdentifier:(id)arg1;
- (id)componentStyleForComponent:(id)arg1;
- (id)componentStyleForIdentifiers:(id)arg1;
- (id)textStyleForIdentifier:(id)arg1;
- (id)componentTextStyleForIdentifiers:(id)arg1;
- (id)componentTextStyleForIdentifier:(id)arg1 classification:(id)arg2;
- (id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2;
- (id)resourceForIdentifier:(id)arg1;
- (id)imageResourceForIdentifier:(id)arg1;
- (id)initWithDocumentControllerProvider:(id)arg1 componentStyleMerger:(id)arg2 componentTextStyleMerger:(id)arg3;

@end
