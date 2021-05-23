/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface VKImageSourceKey : NSObject

{
    unsigned int _keyType;
    NSString *_imageName;
    NSString *_shieldText;
    NSString *_shieldTextLocale;
    unsigned int _shieldType;
    Color_c5f82c4a _shieldColor;
    unsigned int _iconAttributeKey;
    unsigned int _iconAttributeValue;
    unsigned char _dataType;
    NSString *_text;
    NSString *_relatedText;
    _Bool _hasDataValue;
    unsigned int _dataValue;
    struct CGPoint _imageCenter;
    NSArray *_fallbackImageKeys;
}

@property (nonatomic) unsigned char dataType;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *relatedText;
@property (nonatomic) unsigned int dataValue;
@property (nonatomic) struct CGPoint imageCenter;
@property (retain, nonatomic) NSArray *fallbackImageKeys;
@property (nonatomic, readonly) unsigned int keyType;
@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, readonly) unsigned int shieldType;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, readonly) NSString *shieldTextLocale;
@property (nonatomic, readonly) CDStruct_83984b6f transitLineColor;
@property (nonatomic, readonly) unsigned int iconAttributeKey;
@property (nonatomic, readonly) unsigned int iconAttributeValue;
@property (nonatomic, readonly) _Bool hasDataValue;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithDataType:(unsigned char)arg1;
- (id)initWithLabelImageKey:(const shared_ptr_85e81048 *)arg1;
- (id)initWithShieldText:(const char *)arg1 locale:(const char *)arg2 type:(unsigned int)arg3 color:(Color_c5f82c4a)arg4;
- (id)initWithIconAttributeKey:(unsigned int)arg1 attributeValue:(unsigned int)arg2;
- (id)_initWithKeyType:(unsigned int)arg1;
- (id)initWithIconName:(const char *)arg1;
- (id)initWithShieldName:(const char *)arg1 text:(const char *)arg2 locale:(const char *)arg3 color:(Color_c5f82c4a)arg4;

@end
