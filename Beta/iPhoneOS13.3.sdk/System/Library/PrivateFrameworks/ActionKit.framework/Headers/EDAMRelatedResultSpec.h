/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSSet;

@interface EDAMRelatedResultSpec : FATObject

{
    NSNumber *_maxNotes;
    NSNumber *_maxNotebooks;
    NSNumber *_maxTags;
    NSNumber *_writableNotebooksOnly;
    NSNumber *_includeContainingNotebooks;
    NSNumber *_includeDebugInfo;
    NSNumber *_maxExperts;
    NSNumber *_maxRelatedContent;
    NSSet *_relatedContentTypes;
}

@property (retain, nonatomic) NSNumber *maxNotes;
@property (retain, nonatomic) NSNumber *maxNotebooks;
@property (retain, nonatomic) NSNumber *maxTags;
@property (retain, nonatomic) NSNumber *writableNotebooksOnly;
@property (retain, nonatomic) NSNumber *includeContainingNotebooks;
@property (retain, nonatomic) NSNumber *includeDebugInfo;
@property (retain, nonatomic) NSNumber *maxExperts;
@property (retain, nonatomic) NSNumber *maxRelatedContent;
@property (retain, nonatomic) NSSet *relatedContentTypes;

+ (id)structName;
+ (id)structFields;

@end
