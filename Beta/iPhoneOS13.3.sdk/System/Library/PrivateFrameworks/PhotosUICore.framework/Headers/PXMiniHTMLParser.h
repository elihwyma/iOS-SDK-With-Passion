/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXMiniHTMLParser : NSObject

{
    CDUnknownBlockType _parsedCharactersBlock;
    CDUnknownBlockType _parsedMarkupElementStartBlock;
    CDUnknownBlockType _parsedMarkupElementEndBlock;
    CDUnknownBlockType _parsedErrorBlock;
    NSString *__string;
}

@property (nonatomic, readonly) NSString *_string;
@property (copy, nonatomic) CDUnknownBlockType parsedCharactersBlock;
@property (copy, nonatomic) CDUnknownBlockType parsedMarkupElementStartBlock;
@property (copy, nonatomic) CDUnknownBlockType parsedMarkupElementEndBlock;
@property (copy, nonatomic) CDUnknownBlockType parsedErrorBlock;

+ (id)stringByConvertingToHTML:(id)arg1;
+ (id)charactersForEntityNames;

- (id)init;
- (id)initWithString:(id)arg1;
- (void)parse;

@end
