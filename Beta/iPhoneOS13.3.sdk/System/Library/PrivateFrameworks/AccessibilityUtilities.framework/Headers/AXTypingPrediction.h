/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AXTypingPrediction : NSObject

{
    NSString *_fullWord;
    NSString *_textToInsert;
    NSString *_prefix;
    double _probability;
    struct _NSRange _rangeToReplace;
}

@property (copy, nonatomic) NSString *fullWord;
@property (copy, nonatomic) NSString *textToInsert;
@property (copy, nonatomic) NSString *prefix;
@property (nonatomic) struct _NSRange rangeToReplace;
@property (nonatomic) double probability;

- (id)description;

@end
