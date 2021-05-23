/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNComposeRecipientOriginContext : NSObject

{
    NSString *_searchTerm;
    unsigned long long _resultType;
}

@property (retain, nonatomic) NSString *searchTerm;
@property (nonatomic) unsigned long long resultType;

@end
