/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface _DUIPotentialDrop : NSObject <Swift>

{
    _Bool _forbidden;
    _Bool _precise;
    _Bool _prefersFullSizePreview;
    unsigned long long _operation;
    long long _preferredBadgeStyle;
}

@property (nonatomic) unsigned long long operation;
@property (nonatomic) _Bool forbidden;
@property (nonatomic) _Bool precise;
@property (nonatomic) _Bool prefersFullSizePreview;
@property (nonatomic) long long preferredBadgeStyle;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
