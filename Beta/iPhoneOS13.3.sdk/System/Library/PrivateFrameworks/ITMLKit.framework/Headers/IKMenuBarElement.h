/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKCollectionElement.h>

@class IKAppMenuBarDocument;

@interface IKMenuBarElement : IKCollectionElement

{
    IKAppMenuBarDocument *_menuBarDocument;
}

@property (nonatomic, readonly) IKAppMenuBarDocument *menuBarDocument;

+ (id)supportedFeatures;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
