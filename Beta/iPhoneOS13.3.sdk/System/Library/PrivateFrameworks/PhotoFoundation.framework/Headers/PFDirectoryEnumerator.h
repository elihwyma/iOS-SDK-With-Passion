/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSEnumerator.h>

@class NSMutableArray, NSString;

@protocol PFFileFilter;

@interface PFDirectoryEnumerator : NSEnumerator

{
    struct {
        int _field1;
        long long _field2;
        long long _field3;
        char *_field4;
        int _field5;
        long long _field6;
        long long _field7;
        int _field8;
        struct _opaque_pthread_mutex_t _field9;
        struct _telldir *_field10;
    } *_DIR;
    NSString *_path;
    id <PFFileFilter> _filterDelegate;
    int _fileType;
    _Bool _recursive;
    NSMutableArray *_recursiveDirArray;
    int _recursionMode;
    int _options;
    _Bool _enumerationFinished;
}

@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) int fileType;
@property (nonatomic, readonly) id <PFFileFilter> filterDelegate;
@property (nonatomic, readonly) int options;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)nextObject;
- (id)allObjects;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 filterDelegate:(id)arg2 fileType:(int)arg3 recursive:(_Bool)arg4 mode:(int)arg5 options:(int)arg6;
- (id)initWithPath:(id)arg1 filterDelegate:(id)arg2 fileType:(int)arg3;
- (id)initWithPath:(id)arg1 filterDelegate:(id)arg2;
- (id)initWithPath:(id)arg1 recursive:(_Bool)arg2;

@end
