/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class ICApp, NSArray, NSDictionary, NSString, NSURL;

@interface ICScheme : NSObject

{
    ICApp *_app;
    NSString *_scheme;
    NSArray *_actions;
    NSArray *_capabilities;
    NSDictionary *_definition;
}

@property (copy, nonatomic, readonly) NSDictionary *definition;
@property (weak, nonatomic, readonly) ICApp *app;
@property (nonatomic, readonly) NSString *scheme;
@property (nonatomic, readonly) NSURL *universalLinkBaseURL;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSArray *capabilities;
@property (nonatomic, readonly) _Bool canLaunchApp;
@property (nonatomic, readonly, getter=isCallbackScheme) _Bool callbackScheme;
@property (nonatomic, readonly) NSString *callbackSourceNameKey;
@property (nonatomic, readonly) NSString *callbackSuccessURLKey;
@property (nonatomic, readonly) NSString *callbackCancelURLKey;
@property (nonatomic, readonly) NSString *callbackErrorURLKey;
@property (nonatomic, readonly, getter=isAvailable) _Bool available;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)matchesURL:(id)arg1;
- (id)initWithDefinition:(id)arg1 app:(id)arg2;

@end
