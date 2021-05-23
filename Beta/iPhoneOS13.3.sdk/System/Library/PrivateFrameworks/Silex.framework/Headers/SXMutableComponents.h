/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponents.h>

@interface SXMutableComponents : SXComponents

- (id)description;
- (id)debugDescription;
- (void)setComponents:(id)arg1;
- (void)replaceComponentAtIndex:(unsigned long long)arg1 withComponent:(id)arg2;
- (void)removeComponentAtIndex:(unsigned long long)arg1;
- (void)removeAllComponents;
- (void)_removeComponent:(id)arg1;
- (id)debugDescriptionForComponents:(id)arg1 depth:(unsigned long long)arg2;
- (void)insertComponent:(id)arg1 afterComponent:(id)arg2;
- (void)removeComponentWithIdentifier:(id)arg1;

@end
