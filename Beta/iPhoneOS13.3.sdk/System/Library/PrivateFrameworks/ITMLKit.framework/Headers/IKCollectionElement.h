/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKAppBrowserBridge, IKHeaderElement, NSArray;

@interface IKCollectionElement : IKViewElement

{
    NSArray *_sections;
    IKAppBrowserBridge *_browserBridge;
}

@property (retain, nonatomic, readonly) IKHeaderElement *header;
@property (retain, nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) IKAppBrowserBridge *browserBridge;

+ (id)supportedFeaturesForElementName:(id)arg1;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)appDocumentDidMarkStylesDirty;

@end
