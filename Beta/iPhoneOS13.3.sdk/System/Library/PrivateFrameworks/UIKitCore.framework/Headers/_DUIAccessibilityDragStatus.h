/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface _DUIAccessibilityDragStatus : NSObject <Swift>

{
    _Bool _forbidden;
    long long _itemCount;
    unsigned long long _potentialOperation;
}

@property (nonatomic) long long itemCount;
@property (nonatomic) unsigned long long potentialOperation;
@property (nonatomic) _Bool forbidden;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
