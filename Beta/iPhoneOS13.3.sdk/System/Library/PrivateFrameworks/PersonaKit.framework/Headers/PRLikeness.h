/*
 Image: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSMutableSet, NSSet, NSString;

@interface PRLikeness : NSObject

{
    struct CGImage *_staticRepresentation;
    NSData *_staticRepresentationData;
    NSMutableSet *_dirtyProperties;
    _Bool _isCurrent;
    unsigned long long _type;
    unsigned long long _scope;
    NSData *_recipe;
    NSDate *_creationDate;
    NSString *_uniqueIdentifier;
    NSString *_externalIdentifier;
    unsigned long long _version;
    NSDate *_expirationDate;
    NSDate *_softExpirationDate;
    NSString *_ownerID;
    long long _source;
    NSDate *_insertionDate;
    struct CGRect _cropRectForTopLeftOrigin;
}

@property (nonatomic, setter=setCurrent:) _Bool isCurrent;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSDate *softExpirationDate;
@property (retain, nonatomic) NSData *staticRepresentationData;
@property (retain, nonatomic) NSString *ownerID;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long scope;
@property (nonatomic) long long source;
@property (nonatomic, readonly) NSString *typeDescription;
@property (nonatomic, readonly) NSString *scopeDescription;
@property (retain, nonatomic) NSDate *insertionDate;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSSet *dirtyProperties;
@property (nonatomic, readonly) _Bool isDirty;
@property (copy, nonatomic) NSData *recipe;
@property (nonatomic) struct CGRect cropRectForTopLeftOrigin;
@property (nonatomic, readonly) struct CGRect cropRectForBottomLeftOrigin;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *externalIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)_dateFormatter;
+ (id)monogramWithRecipe:(id)arg1 staticRepresentation:(struct CGImage *)arg2;
+ (id)photoWithScope:(unsigned long long)arg1 image:(struct CGImage *)arg2;
+ (id)photoWithImage:(struct CGImage *)arg1;
+ (id)monogramWithScope:(unsigned long long)arg1 recipe:(id)arg2 staticRepresentation:(struct CGImage *)arg3;
+ (id)_photoWithScope:(unsigned long long)arg1 image:(struct CGImage *)arg2 cropRectForTopLeftOrigin:(struct CGRect)arg3;
+ (struct CGRect)_flippedRectForRect:(struct CGRect)arg1 relativeToImage:(struct CGImage *)arg2;
+ (id)photoWithImage:(struct CGImage *)arg1 cropRectForTopLeftOrigin:(struct CGRect)arg2;
+ (id)descriptionForScope:(unsigned long long)arg1;
+ (id)photoWithImage:(struct CGImage *)arg1 cropRectForBottomLeftOrigin:(struct CGRect)arg2;
+ (id)photoWithImage:(struct CGImage *)arg1 cropRect:(struct CGRect)arg2;
+ (id)diddlySquatLikeness;
+ (id)likenessWithPropagatedData:(id)arg1;
+ (_Bool)automaticallyNotifiesObserversOfCropRectForTopLeftOrigin;
+ (unsigned long long)scopeFromDescription:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (void)clearDirtyProperties;
- (struct CGRect)cropRect;
- (void)setCropRect:(struct CGRect)arg1;
- (void)setStaticRepresentation:(struct CGImage *)arg1;
- (_Bool)isDiddlySquat;
- (id)dataForPropagation;
- (struct CGImage *)staticRepresentation;

@end
