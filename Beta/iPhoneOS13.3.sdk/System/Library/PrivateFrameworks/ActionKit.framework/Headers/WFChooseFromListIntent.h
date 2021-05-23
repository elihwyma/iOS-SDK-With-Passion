/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Intents/INIntent.h>

@class NSArray, NSString;

@interface WFChooseFromListIntent : INIntent

@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSArray *originalItems;
@property (copy, nonatomic) NSArray *chosenItems;

@end
