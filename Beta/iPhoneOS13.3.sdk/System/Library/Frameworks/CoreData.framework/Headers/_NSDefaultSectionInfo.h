/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSFetchedResultsController, NSString;

__attribute__((visibility("hidden")))
@interface _NSDefaultSectionInfo : NSObject

{
    NSFetchedResultsController *_controller;
    NSString *_name;
    NSString *_indexTitle;
    unsigned long long _sectionOffset;
    unsigned long long _numberOfObjects;
    unsigned long long _oldSectionNumber;
    id _sectionObjects;
}

@property (nonatomic, readonly) unsigned long long sectionOffset;
@property (nonatomic, readonly) unsigned long long sectionNumber;
@property (nonatomic) unsigned long long oldSectionNumber;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *indexTitle;
@property (nonatomic, readonly) unsigned long long numberOfObjects;
@property (nonatomic, readonly) NSArray *objects;

- (void)dealloc;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setController:(id)arg1;
- (id)initWithController:(id)arg1 name:(id)arg2 indexTitle:(id)arg3 sectionOffset:(unsigned long long)arg4;
- (void)setNumberOfObjects:(unsigned long long)arg1;
- (void)setSectionOffset:(unsigned long long)arg1;
- (void)clearSectionObjectsCache;

@end
