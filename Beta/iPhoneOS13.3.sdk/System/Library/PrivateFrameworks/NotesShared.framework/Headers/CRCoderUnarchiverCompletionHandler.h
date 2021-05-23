/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface CRCoderUnarchiverCompletionHandler : NSObject

{
    CDUnknownBlockType block;
    id dependency;
    id value;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (weak, nonatomic) id dependency;
@property (weak, nonatomic) id value;

@end
