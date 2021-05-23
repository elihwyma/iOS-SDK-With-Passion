/*
 Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface WBUAutoFillDisplayData : NSObject

{
    NSString *_label;
    NSArray *_fillMatches;
}

@property (retain, nonatomic) NSString *label;
@property (nonatomic, readonly) NSString *valueString;
@property (nonatomic, readonly) NSString *property;
@property (copy, nonatomic, readonly) NSArray *fillMatches;

- (id)addressStringForLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 fillMatches:(id)arg2;

@end
