/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKit/Swift-Protocol.h>

@class NSObject, NSString;

@protocol NSSecureCoding;

@protocol _WKFocusedElementInfo <Swift>

@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *value;
@property (copy, nonatomic, readonly) NSString *placeholder;
@property (copy, nonatomic, readonly) NSString *label;
@property (nonatomic, readonly, getter=isUserInitiated) _Bool userInitiated;
@property (nonatomic, readonly) NSObject<NSSecureCoding> *userObject;

@end
