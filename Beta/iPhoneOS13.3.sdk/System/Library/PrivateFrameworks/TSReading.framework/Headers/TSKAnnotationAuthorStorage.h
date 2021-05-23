/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

@class NSMutableSet, NSSet;

@interface TSKAnnotationAuthorStorage : TSPObject

{
    NSMutableSet *mAuthors;
}

@property (nonatomic, readonly) NSSet *authors;

- (void)dealloc;
- (id)description;
- (id)packageLocator;
- (_Bool)shouldDelayArchiving;
- (unsigned int)delayedArchivingPriority;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (void)p_addAuthor:(id)arg1 isFromDocumentSupport:(_Bool)arg2;
- (id)authorWithName:(id)arg1;
- (void)addAuthor:(id)arg1;
- (void)removeAuthor:(id)arg1;
- (id)nextAuthorColor;
- (void)didAddAuthorRelationshipToDocument;
- (void)didRemoveAuthorRelationshipFromDocument;

@end
