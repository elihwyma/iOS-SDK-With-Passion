/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

#import <Silex/Swift-Protocol.h>

@class NSString, UIColor;

@protocol SXTextStyleFontAttributes;

@interface SXDropCapStyle : SXJSONObject <Swift>

@property (nonatomic, readonly) long long numberOfLines;
@property (nonatomic, readonly) long long numberOfRaisedLines;
@property (nonatomic, readonly) long long numberOfCharacters;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) long long padding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) id <SXTextStyleFontAttributes> fontAttributes;

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;

@end
