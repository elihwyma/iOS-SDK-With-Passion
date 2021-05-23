/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDReferenceCollection, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDConditionalFormatting : NSObject

{
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    _Bool mApplyToDate;
}

+ (id)conditionalFormatting;

- (id)init;
- (id)description;
- (unsigned long long)rangeCount;
- (id)rangeAtIndex:(unsigned long long)arg1;
- (id)rules;
- (void)addRange:(id)arg1;
- (void)addRule:(id)arg1;
- (id)ruleAtIndex:(unsigned long long)arg1;
- (unsigned long long)ruleCount;
- (_Bool)isApplyToDate;

@end
