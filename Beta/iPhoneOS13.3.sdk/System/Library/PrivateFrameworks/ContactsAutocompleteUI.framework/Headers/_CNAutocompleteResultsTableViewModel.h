/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface _CNAutocompleteResultsTableViewModel : NSObject

{
    NSMutableDictionary *_sections;
    unsigned long long _numberOfSections;
}

@property (nonatomic) unsigned long long numberOfSections;
@property (nonatomic, readonly) unsigned long long numberOfNonEmptySections;

- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (void)enumerateSections:(CDUnknownBlockType)arg1;
- (void)setSection:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithNumberOfSections:(unsigned long long)arg1;
- (id)computeDiffForModel:(id)arg1;

@end
