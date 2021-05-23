/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString, PGManager;

@interface PGQuestionMergeCandidateFactory : NSObject

{
    PGManager *_manager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithManager:(id)arg1;
- (id)generateQuestionsWithPersons:(id)arg1;

@end
