/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class CNChangeHistoryAnchor, NSArray;

__attribute__((visibility("hidden")))
@interface CNChangeHistoryResult : NSObject <Swift>

{
    _Bool _changesTruncated;
    _Bool _unifyResults;
    CNChangeHistoryAnchor *_latestChangeAnchor;
    NSArray *_contactChanges;
    NSArray *_groupChanges;
    NSArray *_labeledValueChanges;
}

@property (nonatomic) _Bool changesTruncated;
@property (retain, nonatomic) CNChangeHistoryAnchor *latestChangeAnchor;
@property (retain, nonatomic) NSArray *contactChanges;
@property (retain, nonatomic) NSArray *groupChanges;
@property (retain, nonatomic) NSArray *labeledValueChanges;
@property (nonatomic) _Bool unifyResults;

+ (_Bool)supportsSecureCoding;
+ (_Bool)enumerateEnumerator:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)enumerateContactChangesWithKeysToFetch:(id)arg1 fromContactStore:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)contactChangesEnumeratorWithKeysToFetch:(id)arg1 contactStore:(id)arg2;
- (id)groupChangesEnumeratorWithContactStore:(id)arg1;
- (_Bool)enumerateGroupChangesFromContactStore:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)labeledValueChangesEnumeratorWithContactStore:(id)arg1;

@end
