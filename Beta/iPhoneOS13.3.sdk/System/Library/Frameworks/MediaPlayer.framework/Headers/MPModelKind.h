/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSString;

@interface MPModelKind : NSObject <Swift>

{
    Class _modelClass;
}

@property (nonatomic, readonly) Class modelClass;
@property (nonatomic, readonly) NSString *humanDescription;
@property (nonatomic, readonly) MPModelKind *identityKind;

+ (_Bool)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithModelClass:(Class)arg1;
+ (id)kindWithModelClass:(Class)arg1 cacheKey:(id)arg2 block:(CDUnknownBlockType)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (shared_ptr_cf7b8a22)predicateWithBaseProperty:(struct ModelPropertyBase *)arg1;
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;
- (shared_ptr_cf7b8a22)representedSearchScopePredicate;
- (id)_initWithModelClass:(Class)arg1;

@end
