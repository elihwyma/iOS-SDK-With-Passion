/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSError, NSMutableArray, NSMutableDictionary;

@interface ENSessionListNotebooksContext : NSObject

{
    NSMutableArray *_resultNotebooks;
    NSMutableArray *_linkedPersonalNotebooks;
    NSMutableDictionary *_sharedBusinessNotebooks;
    NSCountedSet *_sharedBusinessNotebookGuids;
    NSMutableDictionary *_businessNotebooks;
    NSMutableDictionary *_sharedNotebooks;
    long long _pendingSharedNotebooks;
    NSError *_error;
    CDUnknownBlockType _completion;
}

@property (retain, nonatomic) NSMutableArray *resultNotebooks;
@property (retain, nonatomic) NSMutableArray *linkedPersonalNotebooks;
@property (retain, nonatomic) NSMutableDictionary *sharedBusinessNotebooks;
@property (retain, nonatomic) NSCountedSet *sharedBusinessNotebookGuids;
@property (retain, nonatomic) NSMutableDictionary *businessNotebooks;
@property (retain, nonatomic) NSMutableDictionary *sharedNotebooks;
@property (nonatomic) long long pendingSharedNotebooks;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) CDUnknownBlockType completion;

@end
