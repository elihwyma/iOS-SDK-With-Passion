/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <Foundation/NSObject.h>

@class CNContact;

@interface _CNAUICRRecentContactCNContext : NSObject

{
    CNContact *_existingContact;
    CNContact *_interimContact;
}

@property (retain, nonatomic) CNContact *existingContact;
@property (retain, nonatomic) CNContact *interimContact;

@end
