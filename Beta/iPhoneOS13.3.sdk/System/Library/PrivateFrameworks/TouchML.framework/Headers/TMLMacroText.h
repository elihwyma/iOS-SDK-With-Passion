/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSString;

@interface TMLMacroText : NSObject

{
    NSString *macroText;
    NSString *basePath;
    NSString *filename;
}

@property (retain, nonatomic) NSString *macroText;
@property (retain, nonatomic) NSString *basePath;
@property (retain, nonatomic) NSString *filename;

+ (id)macroTextWithMacroText:(id)arg1 basePath:(id)arg2 filename:(id)arg3;

@end
