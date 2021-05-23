/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString;

@protocol PXLabeledValueType;

@interface PXLabeledValue : NSObject <Swift>

{
    _Bool _separator;
    id <PXLabeledValueType> _value;
    NSString *_localizedLabel;
}

@property (nonatomic, readonly) id <PXLabeledValueType> value;
@property (nonatomic, readonly) NSString *localizedLabel;
@property (nonatomic, readonly, getter=isSeparator) _Bool separator;

+ (id)separatorLabeledValue;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToLabeledValue:(id)arg1;
- (id)_initSeparator;
- (id)initWithValue:(id)arg1 localizedLabel:(id)arg2;

@end
