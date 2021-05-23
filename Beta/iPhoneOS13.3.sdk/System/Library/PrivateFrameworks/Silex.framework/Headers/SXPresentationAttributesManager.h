/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, SXPresentationAttributes;

@interface SXPresentationAttributesManager : NSObject

{
    SXPresentationAttributes *_presentationAttributes;
    NSHashTable *_observers;
}

@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SXPresentationAttributes *presentationAttributes;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)updateAttributes:(id)arg1;
- (void)attributesChangedFrom:(id)arg1 to:(id)arg2;

@end
