/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppContext, NSString;

@protocol IKAppBrowser;

@interface IKAppBrowserBridge : NSObject

{
    double _cornerRadius;
    double _interitemSpacing;
    IKAppContext *_appContext;
    NSString *_featureName;
    id <IKAppBrowser> _appBrowser;
    struct UIEdgeInsets _maskInset;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct UIEdgeInsets maskInset;
@property (weak, nonatomic) id <IKAppBrowser> appBrowser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *featureName;
@property (weak, nonatomic, readonly) IKAppContext *appContext;

+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (void)present;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

@end
