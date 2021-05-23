/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSRegularExpression.h>

@interface NSRegularExpression (MFMessageBodyParser)

+ (id)mf_attributionExpression;
+ (id)mf_attributionPrefixExpression;
+ (id)mf_forwardSeparatorExpression;
+ (id)mf_signatureExpression;
+ (id)mf_horizontalSeparatorExpression;
+ (id)mf_copyAttributionRegularExpressionForType:(int)arg1;

@end
