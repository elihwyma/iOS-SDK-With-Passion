/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIAccessibilityCustomRotor.h>

@class NSOrderedSet;

@interface SXAXCustomRotor : UIAccessibilityCustomRotor

{
    NSOrderedSet *_rotorItems;
}

@property (copy, nonatomic) NSOrderedSet *rotorItems;

+ (id)rotorWithName:(id)arg1;

- (id)description;
- (id)initWithName:(id)arg1;
- (id)rotorItemBefore:(id)arg1;
- (id)rotorItemAfter:(id)arg1;
- (long long)indexOfRotorItem:(id)arg1;

@end
