/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSMutableOrderedSet;

@interface UIPasteConfiguration : NSObject <Swift>

{
    NSMutableOrderedSet *_acceptableTypes;
}

@property (copy, nonatomic) NSArray *acceptableTypes;
@property (copy, nonatomic) NSArray *acceptableTypeIdentifiers;

+ (_Bool)supportsSecureCoding;
+ (id)_pasteConfigurationForAcceptingClasses:(id)arg1;
+ (id)pasteConfigurationForAcceptingClasses:(id)arg1;
+ (id)pasteConfigurationWithAcceptableTypes:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addTypeIdentifiersForAcceptingClass:(Class)arg1;
- (id)initWithAcceptableTypes:(id)arg1;
- (id)initWithAcceptableTypeIdentifiers:(id)arg1;
- (void)addAcceptableTypeIdentifiers:(id)arg1;
- (id)initWithTypeIdentifiersForAcceptingClass:(Class)arg1;

@end
