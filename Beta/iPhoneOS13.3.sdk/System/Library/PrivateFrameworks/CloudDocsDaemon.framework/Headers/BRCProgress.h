/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSProgress.h>

@class BRCAccountSession, NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCProgress : NSProgress

{
    NSMutableDictionary *_progressByAliasContainerID;
    _Bool _published;
    NSArray *_parentFileIDs;
    BRCAccountSession *_session;
    BOOL _group;
}

@property (nonatomic, readonly) NSArray *parentFileIDs;
@property (nonatomic, readonly) _Bool isPublished;

+ (id)_progressForDocument:(id)arg1 group:(BOOL)arg2 sizeInfo:(id)arg3;
+ (id)downloadProgressForDocument:(id)arg1 sizeInfo:(id)arg2;
+ (id)uploadProgressForDocument:(id)arg1 sizeInfo:(id)arg2;

- (void)setCompletedUnitCount:(long long)arg1;
- (void)brc_publish;
- (void)brc_unpublish;
- (id)initWithGroup:(BOOL)arg1 parentFileIDs:(id)arg2 session:(id)arg3;
- (void)addAliasItem:(id)arg1;

@end
