/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSArray, OCFontPanose1, OCFontSig;

__attribute__((visibility("hidden")))
@interface OCFontMetadata : NSObject

{
    int _charSet;
    int _pitch;
    int _genericFamily;
    OCFontSig *_sig;
    OCFontPanose1 *_panose1;
    NSArray *_altNames;
}

@property (nonatomic, readonly) OCFontSig *sig;
@property (nonatomic, readonly) int charSet;
@property (nonatomic, readonly) OCFontPanose1 *panose1;
@property (nonatomic, readonly) int pitch;
@property (nonatomic, readonly) int genericFamily;
@property (nonatomic, readonly) NSArray *altNames;

+ (id)fontMetadataWithSig:(id)arg1 charSet:(int)arg2 panose1:(id)arg3 pitch:(int)arg4 genericFamily:(int)arg5 altNames:(id)arg6;

- (id)initWithSig:(id)arg1 charSet:(int)arg2 panose1:(id)arg3 pitch:(int)arg4 genericFamily:(int)arg5 altNames:(id)arg6;

@end
