/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableArray, NSSet, NSString;

@interface UIKBCacheToken : NSObject <Swift>

{
    NSMutableArray *_components;
    NSString *_name;
    double _scale;
    int _emptyFields;
    NSSet *_transformationIdentifiers;
    long long _renderFlags;
}

@property (nonatomic, readonly) NSString *string;
@property (nonatomic) struct CGSize size;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) double scale;
@property (nonatomic) int rowHint;
@property (nonatomic) int displayHint;
@property (nonatomic) long long renderFlags;
@property (nonatomic) CDStruct_227bb23d styling;
@property (nonatomic) int emptyFields;
@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSSet *transformationIdentifiers;

+ (id)tokenForKeyplane:(id)arg1;
+ (id)tokenForKey:(id)arg1 style:(CDStruct_227bb23d)arg2;
+ (id)tokenForKey:(id)arg1 style:(CDStruct_227bb23d)arg2 displayInsets:(struct UIEdgeInsets)arg3;
+ (id)tokenTemplateForKey:(id)arg1 name:(id)arg2 style:(int)arg3 size:(struct CGSize)arg4;
+ (id)tokenTemplateFilledForKey:(id)arg1 style:(int)arg2 size:(struct CGSize)arg3;
+ (id)tokenForKeyMask:(id)arg1 style:(CDStruct_227bb23d)arg2 displayInsets:(struct UIEdgeInsets)arg3;
+ (id)tokenTemplateForKey:(id)arg1 style:(int)arg2 size:(struct CGSize)arg3;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithComponents:(id)arg1 name:(id)arg2;
- (int)_writeString:(id)arg1 toStr:(char *)arg2 maxLen:(int)arg3;
- (int)_writeNumber:(float)arg1 toStr:(char *)arg2;
- (int)_writeEdgeInsets:(struct UIEdgeInsets)arg1 toStr:(char *)arg2 maxLen:(int)arg3;
- (int)_writeArray:(id)arg1 toStr:(char *)arg2 maxLen:(int)arg3;
- (id)stringForConstruction:(CDUnknownBlockType)arg1;
- (id)stringForComponentArray:(id)arg1 additionalValues:(CDUnknownBlockType)arg2;
- (id)stringForState:(int)arg1;
- (_Bool)isUsableForCacheToken:(id)arg1 withRenderFlags:(long long)arg2;
- (void)resetAnnotations;
- (void)annotateWithBool:(_Bool)arg1;
- (void)annotateWithInt:(int)arg1;
- (id)stringForKey:(id)arg1 state:(int)arg2;
- (id)stringForSplitState:(_Bool)arg1 handBias:(long long)arg2;
- (id)stringForRenderFlags:(long long)arg1 lightKeyboard:(_Bool)arg2;

@end
