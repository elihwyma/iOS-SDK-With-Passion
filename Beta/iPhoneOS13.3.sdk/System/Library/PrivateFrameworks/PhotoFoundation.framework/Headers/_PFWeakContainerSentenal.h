/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class PFWeakContainer;

@interface _PFWeakContainerSentenal : NSObject

{
    PFWeakContainer *_container;
}

+ (void)initialize;

- (void)dealloc;
- (oneway void)release;
- (id)initWithContainer:(id)arg1;
- (void)clearContainer;
- (_Bool)isAssociatedWithObject:(id)arg1;
- (void)associateWithObject:(id)arg1;
- (void)removeAssociationWithObject:(id)arg1;

@end
