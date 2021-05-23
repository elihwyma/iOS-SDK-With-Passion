/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSSubstitutionCheckingResult.h>

@class NSArray;

@interface NSCorrectionCheckingResult : NSSubstitutionCheckingResult

{
    NSArray *_alternativeStrings;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)resultType;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (id)alternativeStrings;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 alternativeStrings:(id)arg3;

@end
