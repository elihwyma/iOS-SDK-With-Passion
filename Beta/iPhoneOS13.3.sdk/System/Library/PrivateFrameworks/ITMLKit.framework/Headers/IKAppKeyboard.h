/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppContext, IKJSKeyboard, NSString;

@protocol IKAppKeyboardDelegate;

@interface IKAppKeyboard : NSObject

{
    NSString *_jsText;
    NSString *_jsSource;
    NSString *_featureName;
    IKAppContext *_appContext;
    id <IKAppKeyboardDelegate> _delegate;
    NSString *_text;
    IKJSKeyboard *_jsKeyboard;
    NSString *_source;
}

@property (weak, nonatomic, setter=setJSKeyboard:) IKJSKeyboard *jsKeyboard;
@property (copy, nonatomic, getter=_source, setter=_setSource:) NSString *source;
@property (weak, nonatomic) id <IKAppKeyboardDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=setJSText:) NSString *jsText;
@property (copy, nonatomic, setter=setJSSource:) NSString *jsSource;
@property (copy, nonatomic, readonly) NSString *featureName;
@property (weak, nonatomic, readonly) IKAppContext *appContext;

+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

@end
