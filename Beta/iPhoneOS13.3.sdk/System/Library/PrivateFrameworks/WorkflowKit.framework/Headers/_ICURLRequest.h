/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class ICScheme, NSDictionary, NSString, NSURL, NSUUID;

@protocol WFUserInterface;

@interface _ICURLRequest : NSObject

{
    _Bool _callbackRequest;
    _Bool _deferCompletionUntilReturn;
    _Bool _internalCallbackRequest;
    NSString *_action;
    NSString *_subAction;
    NSUUID *_uniqueID;
    NSURL *_URL;
    ICScheme *_scheme;
    NSString *_bundleIdentifier;
    id <WFUserInterface> _userInterface;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
    NSDictionary *_parameters;
    NSString *_successURLQueryString;
    NSString *_sourceName;
    NSURL *_generatedCallbackURL;
    long long _retries;
}

@property (nonatomic, readonly) NSUUID *uniqueID;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) ICScheme *scheme;
@property (copy, nonatomic, readonly) CDUnknownBlockType opener;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (weak, nonatomic, readonly) id <WFUserInterface> userInterface;
@property (copy, nonatomic) CDUnknownBlockType successHandler;
@property (copy, nonatomic) CDUnknownBlockType failureHandler;
@property (nonatomic, readonly) NSString *action;
@property (nonatomic, readonly) NSString *subAction;
@property (copy, nonatomic) NSDictionary *parameters;
@property (nonatomic, getter=isCallbackRequest) _Bool callbackRequest;
@property (nonatomic) _Bool deferCompletionUntilReturn;
@property (copy, nonatomic) NSString *successURLQueryString;
@property (copy, nonatomic) NSString *sourceName;
@property (copy, nonatomic) NSURL *generatedCallbackURL;
@property (nonatomic) long long retries;
@property (nonatomic, getter=isInternalCallbackRequest) _Bool internalCallbackRequest;

+ (id)requestWithURL:(id)arg1;
+ (id)requestWithURL:(id)arg1 fromSourceApplication:(id)arg2;
+ (id)requestWithURL:(id)arg1 scheme:(id)arg2 userInterface:(id)arg3 bundleIdentifier:(id)arg4 successHandler:(CDUnknownBlockType)arg5 failureHandler:(CDUnknownBlockType)arg6;

- (id)description;
- (id)initWithURL:(id)arg1 scheme:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5 bundleIdentifier:(id)arg6;
- (void)parseActions;

@end
