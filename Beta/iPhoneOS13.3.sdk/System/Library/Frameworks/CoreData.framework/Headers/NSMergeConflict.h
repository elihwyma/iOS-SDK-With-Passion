/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSManagedObject;

@interface NSMergeConflict : NSObject

{
    id _source;
    id _snapshot1;
    id _snapshot2;
    id _snapshot3;
    unsigned long long _newVersion;
    unsigned long long _oldVersion;
}

@property (retain, readonly) NSManagedObject *sourceObject;
@property (retain, readonly) NSDictionary *objectSnapshot;
@property (retain, readonly) NSDictionary *cachedSnapshot;
@property (retain, readonly) NSDictionary *persistedSnapshot;
@property (readonly) unsigned long long newVersionNumber;
@property (readonly) unsigned long long oldVersionNumber;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)objectForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)_doCleanupForXPCStore:(id)arg1 context:(id)arg2;
- (id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 snapshot1:(id)arg4 snapshot2:(id)arg5 snapshot3:(id)arg6;
- (id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5;
- (id)ancestorSnapshot;

@end
