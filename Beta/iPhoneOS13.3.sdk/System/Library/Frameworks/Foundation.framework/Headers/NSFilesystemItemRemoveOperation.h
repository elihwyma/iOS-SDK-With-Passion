/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSOperation.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface NSFilesystemItemRemoveOperation : NSOperation

{
    id _delegate;
    NSString *_removePath;
    NSError *_error;
    void *_state;
    _Bool _filterUnderbars;
}

+ (id)filesystemItemRemoveOperationWithPath:(id)arg1;
+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)error;
- (id)initWithPath:(id)arg1;
- (void)_setError:(id)arg1;
- (void)main;
- (_Bool)_filtersUnderbars;
- (void)_setFilterUnderbars:(_Bool)arg1;

@end
