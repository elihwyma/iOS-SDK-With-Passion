/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMNoteFilter, NSNumber;

@interface EDAMBusinessQuery : FATObject

{
    EDAMNoteFilter *_filter;
    NSNumber *_numExperts;
    NSNumber *_includeNotebooks;
    NSNumber *_includeNotesCounts;
}

@property (retain, nonatomic) EDAMNoteFilter *filter;
@property (retain, nonatomic) NSNumber *numExperts;
@property (retain, nonatomic) NSNumber *includeNotebooks;
@property (retain, nonatomic) NSNumber *includeNotesCounts;

+ (id)structName;
+ (id)structFields;

@end
