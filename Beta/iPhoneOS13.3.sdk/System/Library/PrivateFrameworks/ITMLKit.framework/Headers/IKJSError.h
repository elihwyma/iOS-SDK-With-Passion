/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@class NSDictionary, NSError, NSNumber, NSString;

@interface IKJSError : IKJSObject

{
    IKJSError *_jsUnderlyingError;
    NSError *_wrappedError;
}

@property (nonatomic, readonly) NSError *wrappedError;
@property (nonatomic, readonly) NSNumber *code;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *failureReason;
@property (nonatomic, readonly) NSString *recoverySuggestion;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) IKJSError *underlyingError;

- (id)initWithError:(id)arg1 appContext:(id)arg2;

@end
