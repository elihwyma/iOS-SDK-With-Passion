/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNFuture;

@interface CNAutocompleteInputStringTokenizer : NSObject

{
    CNFuture *_nameStringTokenizer;
}

@property (retain) CNFuture *nameStringTokenizer;

+ (id)tokensFromString:(id)arg1;
+ (id)lazyNameStringTokenizerWithLocale:(id)arg1;

- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)tokensFromString:(id)arg1;
- (CDUnknownBlockType)expandCJKNames;

@end
