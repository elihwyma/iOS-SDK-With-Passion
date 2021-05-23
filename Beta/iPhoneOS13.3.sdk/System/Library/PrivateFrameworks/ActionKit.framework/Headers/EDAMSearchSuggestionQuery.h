/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMNoteFilter, NSString;

@interface EDAMSearchSuggestionQuery : FATObject

{
    NSString *_prefix;
    EDAMNoteFilter *_contextFilter;
}

@property (retain, nonatomic) NSString *prefix;
@property (retain, nonatomic) EDAMNoteFilter *contextFilter;

+ (id)structName;
+ (id)structFields;

@end
