/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/Swift-Protocol.h>

@class NSString;

@protocol NSLayoutRule <Swift>

@property (copy, readonly) NSString *identifier;
@property (copy, readonly) NSString *ruleDescription;

- (unsigned short)makeChildRules;

@end
