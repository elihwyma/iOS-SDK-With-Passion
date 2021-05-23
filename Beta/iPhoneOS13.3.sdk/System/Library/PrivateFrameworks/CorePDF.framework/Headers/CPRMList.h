/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface CPRMList : NSObject

{
    NSMutableArray *_items;
}

@property (readonly) NSArray *listItems;
@property (readonly) struct CGPDFPage *page;

- (struct CGRect)bounds;
- (void)addItem:(id)arg1;

@end
