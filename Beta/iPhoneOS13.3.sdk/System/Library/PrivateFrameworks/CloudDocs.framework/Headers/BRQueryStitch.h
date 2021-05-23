/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class BRFileObjectID, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface BRQueryStitch : NSObject

{
    NSArray *_contexts;
    BRFileObjectID *_objid;
    BOOL _kind;
    NSURL *_fromURL;
    NSURL *_url;
}

@property (retain, nonatomic) NSURL *fromURL;
@property (retain, nonatomic) NSArray *contexts;

- (void)dealloc;
- (id)description;
- (void)done;
- (void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;
- (void)_deletionDone;
- (void)_creationDone;
- (void)_renameDone;
- (id)initWithURL:(id)arg1 objid:(id)arg2 kind:(BOOL)arg3;
- (void)setQueries:(id)arg1;

@end
