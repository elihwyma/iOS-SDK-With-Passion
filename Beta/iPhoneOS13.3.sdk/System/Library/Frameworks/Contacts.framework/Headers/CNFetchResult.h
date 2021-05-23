/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface CNFetchResult : NSObject

{
    id _value;
    NSData *_currentHistoryToken;
}

@property (nonatomic, readonly) id value;
@property (copy, nonatomic, readonly) NSData *currentHistoryToken;

- (id)description;
- (id)initWithValue:(id)arg1 currentHistoryToken:(id)arg2;

@end
