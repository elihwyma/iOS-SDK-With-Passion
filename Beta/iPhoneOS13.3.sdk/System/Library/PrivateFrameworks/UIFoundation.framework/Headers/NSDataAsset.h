/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class CUINamedData, NSData, NSString;

@interface NSDataAsset : NSObject

{
    CUINamedData *_namedData;
}

@property (copy, readonly) NSString *name;
@property (copy, readonly) NSData *data;
@property (copy, readonly) NSString *typeIdentifier;

+ (id)_namedDataPrivateAccessorWithName:(id)arg1 bundle:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 bundle:(id)arg2;

@end
