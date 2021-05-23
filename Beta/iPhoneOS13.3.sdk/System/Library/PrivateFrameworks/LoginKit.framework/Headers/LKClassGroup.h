/*
 Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface LKClassGroup : NSObject

{
    NSString *_classGroupName;
    NSArray *_classes;
}

@property (copy, nonatomic, readonly) NSString *classGroupName;
@property (copy, nonatomic, readonly) NSArray *classes;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToLKClassGroup:(id)arg1;
- (id)initWithGroupName:(id)arg1 classes:(id)arg2;
- (id)initWithClassGroupDictionary:(id)arg1 classesDictionaryByClassID:(id)arg2;

@end
