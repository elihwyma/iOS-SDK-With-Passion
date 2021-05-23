/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSString;

@interface PTTestRecipeInfo : NSObject

{
    NSString *_uniqueIdentifier;
    NSString *_domainIdentifier;
    NSString *_title;
    NSIndexSet *_events;
}

@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) NSString *domainIdentifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSIndexSet *events;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTestRecipe:(id)arg1 domainIdentifier:(id)arg2;

@end
