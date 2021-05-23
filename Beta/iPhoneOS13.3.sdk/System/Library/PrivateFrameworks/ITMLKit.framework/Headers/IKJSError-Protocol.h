/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class IKJSError, NSDictionary, NSNumber, NSString;

@protocol IKJSError <Swift>

@property (nonatomic, readonly) NSNumber *code;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *failureReason;
@property (nonatomic, readonly) NSString *recoverySuggestion;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) IKJSError *underlyingError;

@end
