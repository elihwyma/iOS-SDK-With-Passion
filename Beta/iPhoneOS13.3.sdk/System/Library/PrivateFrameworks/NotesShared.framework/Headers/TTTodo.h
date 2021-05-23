/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface TTTodo : NSObject

{
    _Bool _done;
    NSUUID *_uuid;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) _Bool done;

+ (id)todoWithIdentifier:(id)arg1 done:(_Bool)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)serialize;
- (void)saveToArchive:(struct Todo *)arg1;
- (id)initWithArchive:(const struct Todo *)arg1;
- (id)initWithIdentifier:(id)arg1 done:(_Bool)arg2;
- (id)todoWithDone:(_Bool)arg1;

@end
