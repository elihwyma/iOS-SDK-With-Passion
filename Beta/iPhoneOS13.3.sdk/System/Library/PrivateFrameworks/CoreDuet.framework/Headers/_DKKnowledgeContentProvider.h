/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol _DKKnowledgeQuerying;

@interface _DKKnowledgeContentProvider : NSObject

{
    id <_DKKnowledgeQuerying> _knowledgeStore;
}

@property (retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)executeQuery:(id)arg1 error:(id *)arg2;
- (id)initWithKnowledgeStore:(id)arg1;
- (void)executeQuery:(id)arg1 queue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end
