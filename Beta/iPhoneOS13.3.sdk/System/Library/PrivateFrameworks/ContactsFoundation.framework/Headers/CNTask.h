/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNTask : NSObject

{
    _Bool _cancelled;
    NSString *_name;
}

@property (readonly, getter=isCancelled) _Bool cancelled;
@property (copy) NSString *name;

+ (id)taskWithBlock:(CDUnknownBlockType)arg1;
+ (id)taskWithName:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)taskWithResult:(id)arg1;
+ (id)taskWithName:(id)arg1 subtasks:(id)arg2;
+ (id)taskWithName:(id)arg1 result:(id)arg2;
+ (id)taskWithError:(id)arg1;
+ (id)taskWithName:(id)arg1 error:(id)arg2;

- (id)init;
- (id)run;
- (id)description;
- (id)initWithName:(id)arg1;
- (_Bool)cancel;
- (id)recover:(CDUnknownBlockType)arg1;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (id)run:(id *)arg1;
- (id)map:(CDUnknownBlockType)arg1;

@end
