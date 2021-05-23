/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <PrototypeTools/PTSRow.h>

@class NSArray, NSString;

@protocol PTChoiceRowDataSource;

@interface PTChoiceRow : PTSRow

{
    NSArray *_possibleValues;
    NSArray *_possibleTitles;
    NSArray *_possibleShortTitles;
    id <PTChoiceRowDataSource> _dataSource;
    NSString *_choiceIdentifier;
}

@property (weak, nonatomic) id <PTChoiceRowDataSource> dataSource;
@property (retain, nonatomic) NSString *choiceIdentifier;
@property (copy, nonatomic) NSArray *possibleValues;
@property (copy, nonatomic) NSArray *possibleTitles;
@property (copy, nonatomic) NSArray *possibleShortTitles;

- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)arg1;
- (id)titleForSection:(long long)arg1;
- (id)valueForRow:(long long)arg1 inSection:(long long)arg2;
- (id)possibleValues:(id)arg1 titles:(id)arg2;
- (id)possibleShortTitles:(id)arg1;
- (id)titleForRow:(long long)arg1 inSection:(long long)arg2;
- (id)shortTitleForRow:(long long)arg1 inSection:(long long)arg2;
- (id)indexPathForValue:(id)arg1;

@end
