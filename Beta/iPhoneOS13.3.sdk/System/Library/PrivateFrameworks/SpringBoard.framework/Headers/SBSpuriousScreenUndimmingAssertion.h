/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBSpuriousScreenUndimmingAssertion : NSObject

{
    NSString *_identifier;
}

+ (id)debugDescription;
+ (void)_accessListWithBlock:(CDUnknownBlockType)arg1;
+ (_Bool)isAnyActive;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithIdentifier:(id)arg1;

@end
