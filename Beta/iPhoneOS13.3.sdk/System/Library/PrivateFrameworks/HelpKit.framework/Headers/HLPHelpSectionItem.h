/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <HelpKit/HLPHelpItem.h>

@class NSArray;

@interface HLPHelpSectionItem : HLPHelpItem

{
    _Bool _open;
    NSArray *_children;
}

@property (nonatomic, getter=isOpen) _Bool open;
@property (copy, nonatomic) NSArray *children;

- (id)debugDescription;

@end
