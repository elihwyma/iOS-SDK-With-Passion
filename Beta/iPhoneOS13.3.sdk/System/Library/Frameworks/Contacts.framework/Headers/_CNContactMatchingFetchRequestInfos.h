/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSArray, NSPredicate;

__attribute__((visibility("hidden")))
@interface _CNContactMatchingFetchRequestInfos : NSObject

{
    NSPredicate *_predicate;
    NSArray *_properties;
}

@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *properties;

+ (id)fetchRequestInfoForPredicate:(id)arg1 properties:(id)arg2;

@end
