/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSManagedObject, _NSDefaultSectionInfo;

__attribute__((visibility("hidden")))
@interface _PFChangeInfo : NSObject

{
    NSManagedObject *_object;
    unsigned long long _changeType;
    NSIndexPath *_startIndexPath;
    NSIndexPath *_finalIndexPath;
    _NSDefaultSectionInfo *_startSectionInfo;
    _NSDefaultSectionInfo *_finalSectionInfo;
}

@property (retain, nonatomic, readonly) NSManagedObject *object;
@property (nonatomic) unsigned long long changeType;
@property (retain, nonatomic) NSIndexPath *startIndexPath;
@property (retain, nonatomic) NSIndexPath *finalIndexPath;
@property (retain, nonatomic) _NSDefaultSectionInfo *startSectionInfo;
@property (retain, nonatomic) _NSDefaultSectionInfo *finalSectionInfo;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithObject:(id)arg1;
- (id)initWithObject:(id)arg1 changeType:(unsigned long long)arg2;

@end
