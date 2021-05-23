/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSDictionary, NSNumber;

@interface EDAMNoteCollectionCounts : FATObject

{
    NSDictionary *_notebookCounts;
    NSDictionary *_tagCounts;
    NSNumber *_trashCount;
}

@property (retain, nonatomic) NSDictionary *notebookCounts;
@property (retain, nonatomic) NSDictionary *tagCounts;
@property (retain, nonatomic) NSNumber *trashCount;

+ (id)structName;
+ (id)structFields;

@end
