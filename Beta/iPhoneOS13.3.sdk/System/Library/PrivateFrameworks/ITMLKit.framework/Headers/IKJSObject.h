/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppContext, NSMutableDictionary;

@interface IKJSObject : NSObject

{
    IKAppContext *_appContext;
    NSMutableDictionary *_managedProperties;
}

@property (retain, nonatomic) NSMutableDictionary *managedProperties;
@property (weak, nonatomic, readonly) IKAppContext *appContext;

+ (void)initialize;

- (id)init;
- (id)invokeMethod:(id)arg1 withArguments:(id)arg2;
- (id)initWithAppContext:(id)arg1;
- (void)setJSValue:(id)arg1 forProperty:(id)arg2;
- (id)jsValueForProperty:(id)arg1;

@end
