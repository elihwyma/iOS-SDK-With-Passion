/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKDOMFeatureNavigationDocument, NSString;

@interface IKSplitTemplate : IKViewElement

{
    NSString *_displayMode;
    IKDOMFeatureNavigationDocument *_leftNavigationDocument;
    IKDOMFeatureNavigationDocument *_rightNavigationDocument;
}

@property (copy, nonatomic) NSString *displayMode;
@property (nonatomic, readonly) IKDOMFeatureNavigationDocument *leftNavigationDocument;
@property (nonatomic, readonly) IKDOMFeatureNavigationDocument *rightNavigationDocument;

+ (id)supportedFeatures;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)_featureWithName:(id)arg1;

@end
