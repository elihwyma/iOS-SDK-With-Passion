/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

#import <ContactsUI/Swift-Protocol.h>

@class NSString;

@interface CNContactSection : NSObject <Swift>

{
    NSString *_title;
    NSString *_identifier;
    NSString *_sortKey;
    struct _NSRange _range;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) struct _NSRange range;
@property (retain, nonatomic) NSString *sortKey;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
