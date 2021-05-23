/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface _AXAssertionServer : NSObject

{
    CDUnknownBlockType _assertionWasAcquiredHandler;
    CDUnknownBlockType _assertionWasReleasedHandler;
    NSMutableDictionary *_heldAssertionMap;
}

@property (retain, nonatomic) NSMutableDictionary *heldAssertionMap;
@property (copy, nonatomic) CDUnknownBlockType assertionWasAcquiredHandler;
@property (copy, nonatomic) CDUnknownBlockType assertionWasReleasedHandler;

- (id)init;
- (id)description;
- (void)addHeldAssertionOfType:(id)arg1 byClient:(id)arg2;
- (void)removeHeldAssertionOfType:(id)arg1 byClient:(id)arg2;
- (id)clientsHoldingAssertionOfType:(id)arg1;

@end
