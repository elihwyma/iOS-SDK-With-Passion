/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AXAssertion : NSObject

{
    NSString *_assertionType;
    NSString *_identifier;
}

@property (retain, nonatomic) NSString *assertionType;
@property (retain, nonatomic) NSString *identifier;

+ (id)assertionWithType:(id)arg1 identifier:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)initWithType:(id)arg1 identifier:(id)arg2;
- (void)_notifyServerAssertionWasAcquired;
- (void)_notifyServerAssertionWasRelinquished;
- (_Bool)_hasValidAssertionType;

@end
