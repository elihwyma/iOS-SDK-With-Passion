/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSString;

@interface EDAMSearchSuggestion : FATObject

{
    NSString *_suggestionText;
}

@property (retain, nonatomic) NSString *suggestionText;

+ (id)structName;
+ (id)structFields;

@end
