/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNCollationSection.h>

@class NSString;

@interface CNCollationHeaderSection : CNCollationSection

{
    NSString *_ICUSortKey;
}

@property (readonly) NSString *ICUSortKey;

- (id)initWithKey:(id)arg1 localizedName:(id)arg2 ICUSortKey:(id)arg3;

@end
