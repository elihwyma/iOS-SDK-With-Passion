/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PSIQueryToken;

@interface PXSearchTokenRepresentedObject : NSObject

{
    NSString *_title;
    PSIQueryToken *_queryToken;
    NSString *_priorityAssetUUID;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) PSIQueryToken *queryToken;
@property (nonatomic, readonly) NSString *priorityAssetUUID;

+ (id)new;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTitle:(id)arg1 queryToken:(id)arg2;
- (id)initWithTitle:(id)arg1 queryToken:(id)arg2 priorityAssetUUID:(id)arg3;
- (id)dictionaryForArchiving;

@end
