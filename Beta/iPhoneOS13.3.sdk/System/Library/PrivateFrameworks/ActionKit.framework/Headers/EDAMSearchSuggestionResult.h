/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSArray;

@interface EDAMSearchSuggestionResult : FATObject

{
    NSArray *_typeAheadSuggestions;
}

@property (retain, nonatomic) NSArray *typeAheadSuggestions;

+ (id)structName;
+ (id)structFields;

@end
