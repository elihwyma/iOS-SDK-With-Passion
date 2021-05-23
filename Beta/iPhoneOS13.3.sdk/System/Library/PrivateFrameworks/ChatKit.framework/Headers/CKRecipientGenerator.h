/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CKRecipientGenerator : NSObject

{
    NSArray *_searchABPropertyTypes;
}

@property (retain, nonatomic) NSArray *searchABPropertyTypes;

+ (id)sharedRecipientGenerator;

- (id)recipientWithAddress:(id)arg1;
- (id)recipientWithContact:(id)arg1;
- (id)recipientWithContactProperty:(id)arg1;
- (void)getAddressForContact:(id)arg1 address:(id *)arg2 kind:(unsigned long long *)arg3;
- (void)_appendSearchResults:(id)arg1 identifiers:(id)arg2 abPropertyType:(int)arg3 toArray:(id)arg4;

@end
