/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class ICRandomTextGenerator, NSMutableDictionary;

@interface ICObfuscator : NSObject

{
    ICRandomTextGenerator *_randomTextGenerator;
    NSMutableDictionary *_imageMap;
}

@property (retain, nonatomic) ICRandomTextGenerator *randomTextGenerator;
@property (retain, nonatomic) NSMutableDictionary *imageMap;

- (id)init;
- (void)dealloc;
- (id)obfuscatedStringOfLength:(unsigned long long)arg1;
- (id)obfuscateString:(id)arg1;
- (id)obfuscatedImageOfSize:(struct CGSize)arg1;

@end
