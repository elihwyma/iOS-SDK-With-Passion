/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSDictionary, NSString;

@interface PXAttributedStringHTMLParser : NSObject

{
    unsigned int __currentTraits;
    NSDictionary *_emphasizedAttributes;
    NSDictionary *_italicizedAttributes;
    CDUnknownBlockType _parsedAttributedStringBlock;
    CDUnknownBlockType _parsedErrorBlock;
    NSString *__htmlString;
    NSDictionary *__defaultAttributes;
    NSCountedSet *__currentMarkupElements;
    NSDictionary *__currentAttributes;
}

@property (copy, nonatomic, readonly) NSString *_htmlString;
@property (copy, nonatomic, readonly) NSDictionary *_defaultAttributes;
@property (nonatomic, readonly) NSCountedSet *_currentMarkupElements;
@property (nonatomic, setter=_setCurrentTraits:) unsigned int _currentTraits;
@property (copy, nonatomic, setter=_setCurrentAttributes:) NSDictionary *_currentAttributes;
@property (copy, nonatomic) NSDictionary *emphasizedAttributes;
@property (copy, nonatomic) NSDictionary *italicizedAttributes;
@property (copy, nonatomic) CDUnknownBlockType parsedAttributedStringBlock;
@property (copy, nonatomic) CDUnknownBlockType parsedErrorBlock;

+ (id)stringByConvertingToHTML:(id)arg1;

- (id)init;
- (void)parse;
- (id)initWithHTMLString:(id)arg1 defaultAttributes:(id)arg2;
- (void)_updateCurrentTraits;

@end
