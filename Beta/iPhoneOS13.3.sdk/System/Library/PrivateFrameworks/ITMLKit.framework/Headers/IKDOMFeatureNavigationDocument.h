/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppContext, NSMutableArray, NSString;

@protocol IKAppNavigationController;

@interface IKDOMFeatureNavigationDocument : NSObject

{
    id <IKAppNavigationController> _appNavigationController;
    NSMutableArray *_stackItems;
    NSString *_featureName;
    IKAppContext *_appContext;
    id <IKAppNavigationController> _navigationController;
}

@property (retain, nonatomic) id <IKAppNavigationController> navigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *featureName;
@property (weak, nonatomic, readonly) IKAppContext *appContext;

+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (void)clear;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)popToRootDocument;
- (void)removeDocument:(id)arg1;
- (id)documents;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

@end
