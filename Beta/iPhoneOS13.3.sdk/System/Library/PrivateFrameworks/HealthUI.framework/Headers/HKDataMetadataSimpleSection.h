/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKDataMetadataSection.h>

#import <HealthUI/Swift-Protocol.h>

@class NSMutableArray, NSString;

@interface HKDataMetadataSimpleSection : HKDataMetadataSection <Swift>

{
    NSString *_title;
    NSMutableArray *_rows;
}

@property (nonatomic, readonly) NSString *title;
@property (retain, nonatomic) NSMutableArray *rows;

- (id)sectionTitle;
- (id)initWithTitle:(id)arg1;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (void)addText:(id)arg1 detail:(id)arg2;
- (id)_rowTitles;
- (id)_valueForRowWithTitle:(id)arg1;

@end
