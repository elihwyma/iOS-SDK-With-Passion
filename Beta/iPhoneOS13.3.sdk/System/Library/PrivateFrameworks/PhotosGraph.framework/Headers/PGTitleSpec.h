/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol PGTitleSpecDelegate;

@interface PGTitleSpec : NSObject

{
    _Bool _hasLineBreak;
    _Bool _insertNonBreakableSpace;
    _Bool _hasSpecArgumentHandlingLineBreakBehavior;
    NSString *_format;
    NSArray *_arguments;
    unsigned long long _weekdayCriteria;
    long long _titleCategory;
    id <PGTitleSpecDelegate> _delegate;
}

@property (retain) NSArray *arguments;
@property _Bool hasLineBreak;
@property _Bool insertNonBreakableSpace;
@property _Bool hasSpecArgumentHandlingLineBreakBehavior;
@property unsigned long long weekdayCriteria;
@property (readonly) NSString *format;
@property (readonly) long long titleCategory;
@property (weak) id <PGTitleSpecDelegate> delegate;

+ (long long)_weekdayForWeekdayCriteria:(unsigned long long)arg1;
+ (id)specWithFormat:(id)arg1 titleCategory:(long long)arg2;

- (id)description;
- (id)initWithFormat:(id)arg1 titleCategory:(long long)arg2;
- (id)titleWithMomentNodes:(id)arg1;
- (id)titleWithMomentNodes:(id)arg1 features:(id)arg2;
- (id)_titleWithResolvedArguments:(id)arg1;
- (_Bool)_resolveRequiredInputForArgument:(id)arg1;
- (id)_appendArguments:(id)arg1 toFormatString:(id)arg2;
- (_Bool)_canFulfillWeekdayCriteriaWithMomentNodes:(id)arg1;

@end
