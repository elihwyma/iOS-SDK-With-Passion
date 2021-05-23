/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class IKAppContext, NSString;

@protocol VSIKItemGroupDelegate;

__attribute__((visibility("hidden")))
@interface VSIKItemGroup : NSObject

{
    IKAppContext *_appContext;
    NSString *_featureName;
    long long _jsSelectedItem;
    id <VSIKItemGroupDelegate> _delegate;
    long long _selectedItemIndex;
}

@property (weak, nonatomic) id <VSIKItemGroupDelegate> delegate;
@property (nonatomic) long long selectedItemIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, setter=setJSSelectedItem:) long long jsSelectedItem;
@property (copy, nonatomic, readonly) NSString *featureName;
@property (weak, nonatomic, readonly) IKAppContext *appContext;

+ (id)makeFeatureJSObjectForFeature:(id)arg1;
+ (void)registerFeature;

- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

@end
