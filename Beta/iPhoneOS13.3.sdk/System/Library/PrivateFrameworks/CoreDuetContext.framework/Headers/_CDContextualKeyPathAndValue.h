/*
 Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

#import <Foundation/NSObject.h>

@class _CDContextValue, _CDContextualKeyPath;

@interface _CDContextualKeyPathAndValue : NSObject

{
    _CDContextualKeyPath *_keyPath;
    _CDContextValue *_value;
}

@property (retain, nonatomic) _CDContextualKeyPath *keyPath;
@property (retain, nonatomic) _CDContextValue *value;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 andValue:(id)arg2;

@end
