/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

#import <ContactsUI/Swift-Protocol.h>

@class NSPredicate, NSString;

@interface CNContactFilter : NSObject <Swift>

{
    _Bool _rankSortedResults;
    NSString *_fullTextString;
}

@property (copy, nonatomic) NSString *fullTextString;
@property (nonatomic, readonly) _Bool supportsSections;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic) _Bool rankSortedResults;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
