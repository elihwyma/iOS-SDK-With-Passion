/*
 Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, PTRow;

@interface PTUIRowTableViewCell : UITableViewCell

{
    PTRow *_row;
}

@property (retain, nonatomic) PTRow *row;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)cellStyleForRow:(id)arg1;
+ (id)reuseIdentifierForRow:(id)arg1;
+ (double)cellHeightForRow:(id)arg1;

- (void)dealloc;
- (void)prepareForReuse;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)rowDidChangeValue:(id)arg1;
- (void)rowDidChangeTitle:(id)arg1;
- (void)rowDidChangeImage:(id)arg1;
- (void)rowDidReload:(id)arg1;
- (void)updateDisplayedValue;
- (void)updateCellCharacteristics;
- (void)updateDisplayedContent;

@end
