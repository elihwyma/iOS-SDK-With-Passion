/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OCFontSubfamily;

__attribute__((visibility("hidden")))
@interface OCFont : NSObject

{
    _Bool _bold;
    _Bool _italic;
    OCFontSubfamily *_subfamily;
}

@property (nonatomic, readonly) OCFontSubfamily *subfamily;
@property (nonatomic) _Bool bold;
@property (nonatomic) _Bool italic;

+ (id)fontWithSubfamily:(id)arg1 bold:(_Bool)arg2 italic:(_Bool)arg3;

- (id)initWithSubfamily:(id)arg1 bold:(_Bool)arg2 italic:(_Bool)arg3;

@end
