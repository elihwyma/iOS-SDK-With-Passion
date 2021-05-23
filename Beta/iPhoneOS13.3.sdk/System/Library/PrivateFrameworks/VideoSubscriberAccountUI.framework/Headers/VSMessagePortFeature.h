/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class IKAppContext, NSString;

@protocol VSMessagePortFeatureDelegate;

__attribute__((visibility("hidden")))
@interface VSMessagePortFeature : NSObject

{
    NSString *_featureName;
    IKAppContext *_appContext;
    id <VSMessagePortFeatureDelegate> _delegate;
}

@property (weak, nonatomic) id <VSMessagePortFeatureDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *featureName;
@property (weak, nonatomic, readonly) IKAppContext *appContext;

+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (void)messagePort:(id)arg1 didReceiveMessage:(id)arg2;

@end
